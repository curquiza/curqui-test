/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 16:03:14 by curquiza          #+#    #+#             */
/*   Updated: 2017/09/05 16:13:43 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memjoin(void *s1, void *s2, size_t size1, size_t size2)
{
	char	*rslt;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
	{
		rslt = ft_memalloc(size2);
		ft_memmove(rslt, s2, size2);
		return ((void *)rslt);
	}
	if (!s2)
	{
		rslt = ft_memalloc(size1);
		ft_memmove(rslt, s1, size1);
		return ((void *)rslt);
	}
	rslt = ft_memalloc(size1 + size2);
	ft_memmove(rslt, s1, size1);
	ft_memmove(rslt + size1, s2, size2);
	return ((void *)rslt);
}
