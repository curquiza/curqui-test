/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 15:58:04 by curquiza          #+#    #+#             */
/*   Updated: 2016/11/21 16:31:58 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstat(t_list *lst, size_t n)
{
	size_t	i;

	i = 0;
	if (lst == NULL)
		return (NULL);
	while (lst->next && i < n)
		lst = lst->next;
	return (lst);
}
