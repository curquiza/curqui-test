/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 17:43:07 by curquiza          #+#    #+#             */
/*   Updated: 2017/04/27 14:15:22 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_tabdup(char **tab)
{
	char	**rslt;
	int		len;
	int		i;

	if (!tab)
		return (NULL);
	len = ft_tablen(tab);
	if (!(rslt = (char **)malloc(sizeof(*rslt) * (len + 1))))
		ft_exit("malloc error", 1);
	i = 0;
	while (tab[i])
	{
		rslt[i] = ft_strdup(tab[i]);
		i++;
	}
	rslt[len] = NULL;
	return (rslt);
}
