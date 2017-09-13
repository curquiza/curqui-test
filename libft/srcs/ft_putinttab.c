/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttab_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 18:04:20 by curquiza          #+#    #+#             */
/*   Updated: 2016/12/28 18:04:27 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Affiche un tableau de int sous ce format :
** {1, 2, 3, 4}\n
*/

void	ft_puttab_int(int *tab, int size)
{
	int		i;

	i = 0;
	if (tab && size != 0)
	{
		ft_putchar('{');
		while (i < size)
		{
			ft_putnbr(tab[i]);
			if (i != size - 1)
				ft_putstr(", ");
			i++;
		}
		ft_putchar('}');
	}
	ft_putchar('\n');
}
