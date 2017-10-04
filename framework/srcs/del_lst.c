#include "libunit.h"

void	ft_del_testlst(t_test **test)
{
	t_test	*tmp;
	t_test	*supp;

	tmp = *test;
	while (tmp)
	{
		supp = tmp;
		tmp = tmp->next;
		free(supp);
	}
}

void	ft_del_scorelst(t_score **score)
{
	t_score	*tmp;
	t_score	*supp;

	tmp = *score;
	while (tmp)
	{
		supp = tmp;
		tmp = tmp->next;
		free(supp);
	}
}
