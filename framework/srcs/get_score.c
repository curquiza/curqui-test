#include "libunit.h"

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
		putchar('-');
		putchar(-1 * (n % 10) + '0');
	}
	else if (n / 10 == 0)
		putchar(n % 10 + '0');
	else
	{
		ft_putnbr(n / 10);
		if (n < 0)
			putchar(-1 * (n % 10) + '0');
		else
			putchar(n % 10 + '0');
	}
}

static void	ft_putnbr_col(int n, char *color, char *colreset)
{
	ft_putstr(color);
	ft_putnbr(n);
	ft_putstr(colreset);
}

static void		ft_put_one_score(char *name, int success, int total, char *col)
{
	int		i;

	ft_putstr_col(BEFORE_SCORE_NAME, col, DEF);
	ft_putstr_col(name, col, DEF);
	i = strlen(name);
	while (i < MAX_NAME_LEN)
	{
		putchar(' ');
		i++;
	}
	putchar(' ');
	ft_putnbr_col(success, col, DEF);
	ft_putstr_col("/", col, DEF);
	ft_putnbr_col(total, col, DEF);
	putchar('\n');
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
	return (success == total ? 0 : -1);
}
