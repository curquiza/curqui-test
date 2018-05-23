#include "libunit.h"

/*
** TOOLS ***********************************************************************
*/

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_putstr(char const *s)
{
	if (s)
		write(1, s, strlen(s));
}

static void	ft_putstr_col(char *str, char *color, char *colreset)
{
	ft_putstr(color);
	ft_putstr(str);
	ft_putstr(colreset);
}

static void	ft_putnbr(int n)
{
	if (n / 10 == 0 && n % 10 < 0)
	{
		ft_putchar('-');
		ft_putchar(-1 * (n % 10) + '0');
	}
	else if (n / 10 == 0)
		ft_putchar(n % 10 + '0');
	else
	{
		ft_putnbr(n / 10);
		if (n < 0)
			ft_putchar(-1 * (n % 10) + '0');
		else
			ft_putchar(n % 10 + '0');
	}
}

static void	ft_putnbr_col(int n, char *color, char *colreset)
{
	ft_putstr(color);
	ft_putnbr(n);
	ft_putstr(colreset);
}

static void	ft_putname(t_test *test)
{
	int		i;

	ft_putstr(BEFORE_TEST_NAME);
	ft_putstr(test->name);
	i = strlen(test->name);
	while (i < MAX_NAME_LEN)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\t');
}

/*
** RESULT FUNCTIONS ************************************************************
*/

void		ft_putrslt(t_test *test)
{
	ft_putname(test);
	if (test->sigret == SIGSEGV)
		ft_putstr_col("[SEGV]\n", RED, DEF);
	else if (test->sigret == SIGBUS)
		ft_putstr_col("[BUSE]\n", RED, DEF);
	else if (test->sigret == SIGALRM)
		ft_putstr_col("[TIMEOUT]\n", RED, DEF);
	else if (test->sigret == SIGABRT)
		ft_putstr_col("[ABORT]\n", RED, DEF);
	else if (test->success == -1)
		ft_putstr_col("[KO]\n", RED, DEF);
	else
		ft_putstr_col("[OK]\n", GREEN, DEF);
}

void		ft_putnbrtests(int cnt_success, int cnt_total)
{
	char	*col;

	ft_putchar('\n');
	if (cnt_total == cnt_success)
		col = strdup(GREEN);
	else
		col = strdup(RED);
	ft_putstr_col(" >> ", col, DEF);
	ft_putnbr_col(cnt_success, col, DEF);
	ft_putstr_col("/", col, DEF);
	ft_putnbr_col(cnt_total, col, DEF);
	ft_putstr_col(" tests checked\n", col, DEF);
	free(col);
}

/*
** FINAL SCORE *****************************************************************
*/

static void		ft_put_one_score(char *name, int success, int total, char *col)
{
	int		i;

	ft_putstr_col(BEFORE_SCORE_NAME, col, DEF);
	ft_putstr_col(name, col, DEF);
	i = strlen(name);
	while (i < MAX_NAME_LEN)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar(' ');
	ft_putnbr_col(success, col, DEF);
	ft_putstr_col("/", col, DEF);
	ft_putnbr_col(total, col, DEF);
	ft_putchar('\n');
}

static void		ft_put_score(t_score *score)
{
	char	*col;

	col = NULL;
	while (score)
	{
		col = strdup((score->success == score->total ? GREEN : RED));
		ft_put_one_score(score->name, score->success, score->total, col);
		free(col);
		score = score->next;
	}
}

void			ft_put_end_word(void)
{
	ft_putstr("\n To get all green tests doesn't mean your ft_printf is good.\n");
	ft_putstr(" To get some red tests doesn't mean your ft_printf isn't good.\n");
	ft_putstr("\n Good luck. ¯\\_(ツ)_/¯\n");
}

int				ft_get_final_score(t_score **score)
{
	int		success;
	int		total;
	t_score	*tmp;
	char	*col;

	success = 0;
	total = 0;
	ft_put_score(*score);
	tmp = *score;
	while (tmp)
	{
		success += tmp->success;
		total += tmp->total;
		tmp = tmp->next;
	}
	col = strdup((success == total ? GREEN : RED));
	ft_putstr(BEFORE_SCORE_NAME);
	ft_putstr_col("----------------------------\n", B_YELLOW, DEF);
	ft_put_one_score("TOTAL", success, total, col);
	ft_putstr(BEFORE_SCORE_NAME);
	ft_putstr_col("----------------------------\n", B_YELLOW, DEF);
	free(col);
	ft_del_scorelst(score);
	ft_put_end_word();
	return (success == total ? 0 : -1);
}
