/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 20:22:48 by curquiza          #+#    #+#             */
/*   Updated: 2016/11/18 17:05:00 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*current;

	if (!alst)
		return ;
	current = *alst;
	while (current)
	{
		(*del)(current->content, current->content_size);
		free(current);
		current = current->next;
	}
	*alst = NULL;
}
