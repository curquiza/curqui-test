/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 11:20:33 by curquiza          #+#    #+#             */
/*   Updated: 2016/11/11 14:15:03 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		size;

	size = ft_strlen(s);
	if (c == 0)
		return ((char *)s + size);
	while (--size != -1)
	{
		if (s[size] == (char)c)
			return ((char *)s + size);
	}
	return (NULL);
}
