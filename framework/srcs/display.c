#include "libunit.h"

static void	ft_putname(t_test *test)
{
	int		i;

	ft_putstr(BEFORE_TEST_NAME);
	ft_putstr(test->name);
	i = ft_strlen(test->name);
	while (i < MAX_NAME_LEN)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\t');
}

void		ft_putrslt(t_test *test)
{
	ft_putname(test);
	if (test->sigret == SIGSEGV)
		ft_putendl_col("[SEGV]", RED, DEF);
	else if (test->sigret == SIGBUS)
		ft_putendl_col("[BUSE]", RED, DEF);
	else if (test->sigret == SIGALRM)
		ft_putendl_col("[TIMEOUT]", RED, DEF);
	else if (test->sigret == SIGABRT)
		ft_putendl_col("[ABORT]", RED, DEF);
	else if (test->success == -1)
		ft_putendl_col("[KO]", RED, DEF);
	else
		ft_putendl_col("[OK]", GREEN, DEF);
}

void		ft_putnbrtests(int cnt_success, int cnt_total)
{
	char	*col;

	ft_putendl("");
	if (cnt_total == cnt_success)
		col = ft_strdup(GREEN);
	else
		col = ft_strdup(RED);
	ft_putstr_col(" >> ", col, DEF);
	ft_putnbr_col(cnt_success, col, DEF);
	ft_putstr_col("/", col, DEF);
	ft_putnbr_col(cnt_total, col, DEF);
	ft_putendl_col(" tests checked", col, DEF);
	ft_strdel(&col);
}
