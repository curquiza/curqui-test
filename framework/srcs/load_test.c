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

static void		ft_testadd_back(t_test **alst, t_test *new)
{
	t_test	*tmp;

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

static t_test	*ft_testnew(char *name, int (*f)(void))
{
	t_test		*new;
	int			len;

	new = ft_memalloc(sizeof(*new));
	if (!name)
		memmove(new->name, DEF_NAME, strlen(DEF_NAME));
	else
	{
		len = (strlen(name) < MAX_NAME_LEN ? strlen(name) : MAX_NAME_LEN);
		memmove(new->name, name, len);
	}
	new->fct = f;
	return (new);
}

void			ft_load_test(t_test **test, char *name, int (*f)(void))
{
	ft_testadd_back(test, ft_testnew(name, f));
}
