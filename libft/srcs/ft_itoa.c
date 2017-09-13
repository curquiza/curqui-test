/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:59:29 by curquiza          #+#    #+#             */
/*   Updated: 2017/04/27 14:18:33 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Si n est nul, ne pas renvoyer juste "0" sinon le char* retourné ne sera pas
** mallocé
*/

char			*ft_itoa(int n)
{
	char	*str;
	int		size;

	size = ft_intlen(n);
	str = ft_strnew(size);
	size--;
	str[0] = '0';
	if (n < 0)
		*str = '-';
	while (n != 0)
	{
		if (n < 0)
			str[size--] = '0' - n % 10;
		else
			str[size--] = '0' + n % 10;
		n = n / 10;
	}
	return (str);
}
