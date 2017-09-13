/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 11:17:50 by curquiza          #+#    #+#             */
/*   Updated: 2016/11/10 11:58:46 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_2;
	unsigned char	*s2_2;
	size_t			i;

	s1_2 = (unsigned char *)s1;
	s2_2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1_2[i] != s2_2[i])
			return (s1_2[i] - s2_2[i]);
		i++;
	}
	return (0);
}
