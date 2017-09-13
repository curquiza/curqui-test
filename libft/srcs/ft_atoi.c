/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:20:35 by curquiza          #+#    #+#             */
/*   Updated: 2016/12/28 18:09:15 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** La vraie fonction atoi ne prend pas en compte tous les caractères invisibles
** inf. à 32 et segfault sur le NULL
*/

int		ft_atoi(const char *str)
{
	int		neg;
	int		result;

	if (!str)
		return (0);
	neg = 1;
	result = 0;
	while (*str == 9 || *str == 10 || *str == 11 || *str == 12 || *str == 13
			|| *str == 32)
		str++;
	if (*str == '-')
	{
		neg = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str && *str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * neg);
}
