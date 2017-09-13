#include "libunit.h"

static void	ft_scoreadd_back(t_score **alst, t_score *new)
{
	t_score	*tmp;

	if (alst == NULL)
		return ;
	tmp = *alst;
	if (*alst == NULL)
		*alst = new;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}

static t_score	*ft_newscore(char *name, int success, int total)
{
	t_score		*new;
	int			len;

	new = ft_memalloc(sizeof(*new));
	if (!name)
		ft_memmove(new->name, DEF_NAME, ft_strlen(DEF_NAME));
	else
	{
		len = (ft_strlen(name) < MAX_NAME_LEN ? ft_strlen(name) : MAX_NAME_LEN);
		ft_memmove(new->name, name, len);
	}
	new->success = success;
	new->total = total;
	return (new);
}

void	ft_save_score(t_score **score, char *name, int success, int total)
{
	ft_scoreadd_back(score, ft_newscore(name, success, total));
}
