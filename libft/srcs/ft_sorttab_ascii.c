/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorttab_ascii.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 15:35:10 by curquiza          #+#    #+#             */
/*   Updated: 2016/12/31 17:36:13 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Prend en paramètre un tab **char se termiant par un pointeur NULL
** Trie ce tab par ordre lexicographique = par ordre ascii.
*/

void	ft_sorttab_ascii(char **tab)
{
	char	*tmp;
	int		i;

	if (ft_tablen(tab) == 0 || ft_tablen(tab) == 1)
		return ;
	tmp = NULL;
	i = 0;
	while (tab[i + 1])
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = -1;
		}
		i++;
	}
}
