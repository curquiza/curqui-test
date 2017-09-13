/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 17:59:57 by curquiza          #+#    #+#             */
/*   Updated: 2016/11/18 16:03:15 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	int		tab[11];

	i = 0;
	if (n == 0)
		ft_putchar_fd('0', fd);
	else if (n < 0)
		ft_putchar_fd('-', fd);
	while (n != 0)
	{
		tab[i] = n % 10;
		n = n / 10;
		i++;
	}
	while (--i >= 0)
	{
		if (tab[i] >= 0)
			ft_putchar_fd(tab[i] + '0', fd);
		else
			ft_putchar_fd(-1 * tab[i] + '0', fd);
	}
}
