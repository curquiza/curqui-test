/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdeldup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 18:03:06 by curquiza          #+#    #+#             */
/*   Updated: 2016/12/28 18:03:33 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strdeldup(char **dst, char *src)
{
	if (!src || !dst)
		return ;
	ft_strdel(dst);
	*dst = ft_strdup(src);
}
