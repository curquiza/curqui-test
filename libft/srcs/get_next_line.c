/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 13:24:27 by curquiza          #+#    #+#             */
/*   Updated: 2017/04/27 14:16:36 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
** ft_create_elem et ft_find_or_create :
** Cherche si un maillon contenant le fd existe,
** sinon créée le maillon et l'ajoute en fin de liste.
** Vérifie aussi que le fd est sup. à zéro.
*/

t_file	*ft_create_elem(int fd)
{
	t_file	*new;

	if (!(new = (t_file *)malloc(sizeof(*new))))
		ft_exit("malloc error", 1);
	new->fd = fd;
	if (!(new->buff = ft_strnew(BUFF_SIZE)))
		return (NULL);
	new->next = NULL;
	return (new);
}

t_file	*ft_find_or_create(t_file **begin, int fd)
{
	t_file	*current;

	if (fd < 0)
		return (NULL);
	if (*begin == NULL)
	{
		*begin = ft_create_elem(fd);
		return (*begin);
	}
	current = *begin;
	while (current && fd != current->fd)
		current = current->next;
	if (current == NULL)
	{
		current = *begin;
		while (current->next)
			current = current->next;
		current->next = ft_create_elem(fd);
		return (current->next);
	}
	return (current);
}

/*
** ft_remove_file :
** En fin de lecture. Supprime le maillon contenant le fd.
*/

void	ft_remove_file(t_file **begin, int fd)
{
	t_file	*current;
	t_file	*supp;

	current = *begin;
	if (current->fd == fd)
	{
		ft_strdel(&(current->buff));
		current->fd = -1;
		*begin = (*begin)->next;
		free(current);
	}
	else
	{
		while (current->next && current->next->fd != fd)
			current = current->next;
		supp = current->next;
		current->next = current->next->next;
		ft_strdel(&(supp->buff));
		supp->fd = -1;
		supp->next = NULL;
		free(supp);
	}
}

/*
** ft_work_with_buff :
** En fonction du contenu de buff, remplit line puis modifie buff.
** Retourne 1 si un '\n' est trouvé, 0 sinon.
*/

int		ft_work_with_buff(char *buff, char **line)
{
	int		i;
	int		start;
	char	*tmp_sub;
	char	*tmp_line;

	i = -1;
	start = 0;
	while (++i < BUFF_SIZE && *(buff) != '\n')
		if (*(buff++) == '\0' && *(buff))
			start = i + 1;
	tmp_sub = ft_strsub(buff - i, start, i - start);
	tmp_line = *line;
	*line = ft_strjoin(tmp_line, tmp_sub);
	ft_strdel(&tmp_line);
	ft_strdel(&tmp_sub);
	if (*buff == '\n')
	{
		ft_bzero(buff - i, i + 1);
		return (1);
	}
	if (**line == '\0')
		ft_strdel(line);
	ft_bzero(buff - i, BUFF_SIZE);
	return (0);
}

/*
** get_next_line :
** Retourne 1 si une ligne a éte remplie dans line, 0 si le fichier a fini
** d'être lu, et -1 en cas d'erreur.
**
** Le check de BUFF_SIZE n'est pas fait en premier pour que line ait
** la posibilité d'être re-initialisée => évite les erreurs de double free
** dans le main et les multi fd.
**
** Le dernier check "*line != NULL" permet de ne pas retourner 0 tout de suite
** si le fichier se termine par une ligne sans '\n'.
*/

int		get_next_line(const int fd, char **line)
{
	static t_file	*file;
	t_file			*current;
	int				ret;

	if (!line)
		return (-1);
	*line = NULL;
	if (BUFF_SIZE < 0)
		return (-1);
	if (!(current = ft_find_or_create(&file, fd)))
		return (-1);
	if (ft_work_with_buff(current->buff, line) == 1)
		return (1);
	while ((ret = read(current->fd, current->buff, BUFF_SIZE)) > 0)
	{
		if (ft_work_with_buff(current->buff, line) == 1)
			return (1);
	}
	if (ret < 0)
		return (-1);
	if (*line != NULL)
		return (1);
	ft_remove_file(&file, fd);
	return (0);
}
