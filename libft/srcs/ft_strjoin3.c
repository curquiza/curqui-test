/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 13:00:48 by curquiza          #+#    #+#             */
/*   Updated: 2017/02/06 13:02:07 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_strjoin3 :
** Comme strjoin mais pour 3 chaines de caractères.
*/

char	*ft_strjoin3(char *s1, char *s2, char *s3)
{
	char	*tmp;

	if (!s1 || !s2 || !s3)
		return (NULL);
	tmp = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + ft_strlen(s3));
	ft_strcat(ft_strcat(ft_strcpy(tmp, s1), s2), s3);
	return (tmp);
}
