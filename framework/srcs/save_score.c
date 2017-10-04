#include "libunit.h"

static void		*ft_memalloc(size_t size)
{
	char	*mem;

	if (!(mem = (char *)malloc(sizeof(*mem) * size)))
		exit(1);
	while (size--)
		mem[size] = 0;
	return ((void *)mem);
}

static void		ft_scoreadd_back(t_score **alst, t_score *new)
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
		memmove(new->name, DEF_NAME, strlen(DEF_NAME));
	else
	{
		len = (strlen(name) < MAX_NAME_LEN ? strlen(name) : MAX_NAME_LEN);
		memmove(new->name, name, len);
	}
	new->success = success;
	new->total = total;
	return (new);
}

void			ft_save_score(t_score **score, char *name, int success,
															int total)
{
	ft_scoreadd_back(score, ft_newscore(name, success, total));
}
