/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 11:50:10 by curquiza          #+#    #+#             */
/*   Updated: 2016/11/29 16:23:10 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strdup sert à renvoyer une chaine mallocé
*/

char	*ft_strtrim(char const *s)
{
	int		i;
	int		start;
	int		end;

	i = 0;
	start = 0;
	end = 0;
	if (!s)
		return (NULL);
	while (s[i] && (s[i] == '\n' || s[i] == ' ' || s[i] == '\t'))
		i++;
	if ((unsigned int)i == ft_strlen(s))
		return (ft_strdup("\0"));
	start = i;
	i = ft_strlen(s) - 1;
	while (i >= 0 && (s[i] == '\n' || s[i] == ' ' || s[i] == '\t'))
		i--;
	end = i;
	return (ft_strsub(s, start, end - start + 1));
}
