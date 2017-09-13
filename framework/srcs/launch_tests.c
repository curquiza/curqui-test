/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 13:35:40 by curquiza          #+#    #+#             */
/*   Updated: 2017/09/13 19:47:55 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static void	ft_ret_analysis(t_test *test, int status)
{
	if (WIFEXITED(status))
	{
		test->sigret = 0;
		if (WEXITSTATUS(status) != 0)
			test->success = -1;
		else
			test->success = 0;
	}
	if (status == SIGALRM || WIFSIGNALED(status) == 1)
	{
		test->sigret = status;
		test->success = -1;
	}
}

static void	ft_fork_and_exec(t_test *tmp)
{
	pid_t	process;
	int		status;

	status = 0;
	if ((process = fork()) == -1)
		ft_exit("fork error", 2);
	if (process > 0)
	{
		wait(&status);
		ft_ret_analysis(tmp, status);
	}
	else
	{
		alarm(TIMEOUT_SEC);
		exit(tmp->fct());
	}
}

int			ft_launch_tests(t_test **test, int *success, int *total)
{
	t_test	*tmp;
	int		cnt_success;
	int		cnt_total;

	cnt_success = 0;
	cnt_total = 0;
	tmp = *test;
	while (tmp)
	{
		ft_fork_and_exec(tmp);
		ft_putrslt(tmp);
		cnt_total++;
		tmp->success == 0 ? cnt_success++ : 0;
		tmp = tmp->next;
	}
	if (success)
		*success += cnt_success;
	if (total)
		*total += cnt_total;
	ft_del_testlst(test);
	return (cnt_total != cnt_success ? -1 : 0);
}
