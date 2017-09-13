/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convbase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 18:08:44 by curquiza          #+#    #+#             */
/*   Updated: 2016/12/28 18:19:02 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

/*
** Convertit un nombre (sous forme de *char) reçu en base old_base, et retourne
** ce même nombre en base new_base (tjs sous forme de *char).
**
** Comportement indéterminé :
** - si value n'est pas entrée en base old_base.
** - si value n'est pas une chaine de caractères au format "42" ou "-42"
**
** Dans le cas où :
** - old_base = 10 et value < 0, les négatifs sont gérés comme pour itoa_base
** - new_base = 10 et value < 0, quelle que soit old_base, le résultat retourné
** sera un nombre négatif.
*/

char	*ft_convbase(char *value, int old_base, int new_base)
{
	int		power;
	int		value_10;
	int		i;
	int		tmp;

	if (old_base < 2 || old_base > 16 || !value)
		return (NULL);
	power = 1;
	value_10 = 0;
	tmp = 0;
	i = ft_strlen(value) - 1;
	while (i >= 0)
	{
		tmp = value[i] - 48;
		if (value[i] >= 'A' && value[i] <= 'F')
			tmp = value[i] - 55;
		else if (value[i] == '-')
			tmp = 0;
		value_10 = value_10 + tmp * power;
		power = power * old_base;
		i--;
	}
	if (value[0] == '-')
		return (ft_itoa_base((-1) * value_10, new_base));
	return (ft_itoa_base(value_10, new_base));
}
