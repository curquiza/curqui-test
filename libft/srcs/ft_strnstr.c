/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 14:59:03 by curquiza          #+#    #+#             */
/*   Updated: 2016/11/11 18:09:55 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	size_little;

	i = 0;
	size_little = ft_strlen(little);
	if (size_little == 0)
		return ((char *)big);
	while (*big && len)
	{
		if (*big == *little)
		{
			i = 0;
			while (big[i] == little[i] && big[i] && little[i] && i < len)
				i++;
			if (i == size_little)
				return ((char *)big);
		}
		big++;
		len--;
	}
	return (NULL);
}
