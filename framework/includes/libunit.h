/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 11:54:39 by curquiza          #+#    #+#             */
/*   Updated: 2017/10/04 14:05:44 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/wait.h>
# include <sys/signal.h>
# include <stdio.h>
# include <fcntl.h>

typedef struct	s_data
{
	int		r1;
	int		r2;
	char	*s1;
	char	*s2;
}				t_data;

# define READ_SIZE 10
# define SEC_FACT 1000000
# define TIMEOUT_SEC 2
# define MAX_NAME_LEN 20
# define DEF_NAME "test"
# define BEFORE_TEST_NAME "       "
# define BEFORE_SCORE_NAME "       "
# define DEBUG_FILE_NAME "rslt_trace.txt"

/*
** Colors
*/

# define DEF "\033[0m"
# define BLACK "\x1b[30m"
# define RED "\x1b[31m"
# define B_RED "\x1b[1;31m"
# define GREEN "\x1b[32m"
# define B_GREEN "\x1b[1;32m"
# define YELLOW "\x1b[33m"
# define B_YELLOW "\x1b[1;33m"
# define BLUE "\x1b[34m"
# define B_BLUE "\x1b[1;34m"
# define PINK "\x1b[35m"
# define B_PINK "\x1b[1;35m"
# define CYAN "\x1b[36m"
# define B_CYAN "\x1b[1;36m"
# define WHITE "\x1b[37m"

/*
** Structures
*/

typedef struct		s_test
{
	char			name[MAX_NAME_LEN + 1];
	int				sigret;
	int				success;
	int				(*fct)(void);
	struct s_test	*next;
}					t_test;

typedef struct		s_score
{
	char			name[MAX_NAME_LEN + 1];
	int				success;
	int				total;
	struct s_score	*next;
}					t_score;

/*
** Functions
*/

void				ft_load_test(t_test **test, char *name, int (*f)(void));
int					ft_launch_tests(t_test **test, int *success, int *total);

void				ft_del_testlst(t_test **test);
void				ft_del_scorelst(t_score **score);

void				ft_connect_stdout(int *pfd, int *save);
char				*ft_get_stdout(int *pfd, int *save);

void				ft_save_score(t_score **score, char *name, int succes,
																int total);
int					ft_get_final_score(t_score **score);

void				ft_putrslt(t_test *test);
void				ft_putnbrtests(int cnt_success, int cnt_total);

void				ft_write_test_name(char *str_test);
void				ft_write_rslt(t_data data, int ret);
void				ft_write_in_debug_file(t_test test);
void				ft_write_title();

#endif
