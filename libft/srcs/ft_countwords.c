/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 12:04:47 by curquiza          #+#    #+#             */
/*   Updated: 2016/11/21 13:04:29 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countwords(char const *s, char c)
{
	int		cpt;

	cpt = 0;
	if (!s)
		return (cpt);
	while (*s)
	{
		if (*s != c)
		{
			cpt++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (cpt);
}
