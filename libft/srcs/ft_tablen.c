/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tablen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 15:13:32 by curquiza          #+#    #+#             */
/*   Updated: 2016/12/29 15:30:27 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Pour un tab se terminant par le pointeur NULL
*/

int		ft_tablen(char **tab)
{
	int		cpt;

	cpt = 0;
	if (!tab)
		return (0);
	while (tab[cpt])
		cpt++;
	return (cpt);
}
