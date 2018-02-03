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
		exit(1);
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
		ft_write_in_debug_file(*tmp);
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
