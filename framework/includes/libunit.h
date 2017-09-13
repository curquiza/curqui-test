/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 11:54:39 by curquiza          #+#    #+#             */
/*   Updated: 2017/09/13 18:32:36 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include "libft.h"
# include <sys/wait.h>
# include <sys/signal.h>
# include <stdio.h>

# define READ_SIZE 10
# define SEC_FACT 1000000
# define TIMEOUT_SEC 2
# define MAX_NAME_LEN 20
# define DEF_NAME "test"
# define BEFORE_TEST_NAME "       "
# define BEFORE_SCORE_NAME "       "

/*
** Structures
*/

typedef struct	s_test
{
	char			name[MAX_NAME_LEN + 1];
	int				sigret;
	int				success;
	int				(*fct)(void);
	struct s_test	*next;
}				t_test;

typedef struct	s_score
{
	char			name[MAX_NAME_LEN + 1];
	int				success;
	int				total;
	struct s_score	*next;
}				t_score;

/*
** Functions
*/

void		ft_load_test(t_test **test, char *name, int (*f)(void));
int			ft_launch_tests(t_test **test, int *success, int *total);

void		ft_del_testlst(t_test **test);
void		ft_del_scorelst(t_score **score);

void		ft_connect_stdout(int *pfd, int *save);
char		*ft_get_stdout(int *pfd, int *save);

void		ft_save_score(t_score **score, char *name, int succes, int total);
int			ft_get_final_score(t_score **score);

void		ft_putrslt(t_test *test);
void		ft_putnbrtests(int cnt_success, int cnt_total);

#endif
