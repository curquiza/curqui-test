/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_col.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 18:57:06 by curquiza          #+#    #+#             */
/*   Updated: 2017/01/25 19:02:42 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_col(int n, char *color, char *colreset)
{
	ft_putstr(color);
	ft_putnbr(n);
	ft_putstr(colreset);
}
