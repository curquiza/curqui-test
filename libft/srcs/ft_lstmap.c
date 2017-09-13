/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 20:24:39 by curquiza          #+#    #+#             */
/*   Updated: 2017/04/27 12:49:36 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Obligé de créer le premier maillon avant de faire les autres puis ensuite de
** travailler sur le maillon suivant
** sinon segfault car impossible de travailler sur du NULL
*/

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*start;

	if (!f || !lst)
		return (NULL);
	if (!(tmp = (t_list *)malloc(sizeof(*tmp))))
		ft_exit("malloc error", 1);
	tmp = (*f)(lst);
	start = tmp;
	lst = lst->next;
	while (lst)
	{
		if (!(tmp->next = (t_list *)malloc(sizeof(*tmp))))
			ft_exit("malloc error", 1);
		tmp->next = (*f)(lst);
		tmp = tmp->next;
		lst = lst->next;
	}
	return (start);
}
