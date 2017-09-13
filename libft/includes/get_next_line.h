/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 17:35:34 by curquiza          #+#    #+#             */
/*   Updated: 2016/12/13 17:27:28 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 42

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

typedef struct		s_file
{
	int				fd;
	char			*buff;
	struct s_file	*next;
}					t_file;

t_file				*ft_create_elem(int fd);
t_file				*ft_find_or_create(t_file **begin, int fd);
void				ft_remove_file(t_file **begin, int fd);
int					ft_work_with_buff(char *buff, char **line);
int					get_next_line(const int fd, char **line);

#endif
