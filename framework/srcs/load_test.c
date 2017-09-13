/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 12:59:11 by curquiza          #+#    #+#             */
/*   Updated: 2017/09/13 19:46:02 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static void		ft_testadd_back(t_test **alst, t_test *new)
{
	t_test	*tmp;

	if (alst == NULL)
		return ;
	tmp = *alst;
	if (*alst == NULL)
		*alst = new;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}

static t_test	*ft_testnew(char *name, int (*f)(void))
{
	t_test		*new;
	int			len;

	new = ft_memalloc(sizeof(*new));
	if (!name)
		ft_memmove(new->name, DEF_NAME, ft_strlen(DEF_NAME));
	else
	{
		len = (ft_strlen(name) < MAX_NAME_LEN ? ft_strlen(name) : MAX_NAME_LEN);
		ft_memmove(new->name, name, len);
	}
	new->fct = f;
	return (new);
}

void			ft_load_test(t_test **test, char *name, int (*f)(void))
{
	ft_testadd_back(test, ft_testnew(name, f));
}
