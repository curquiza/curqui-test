#include "test.h"

void	ft_putstr(char const *s)
{
	if (s)
		write(1, s, strlen(s));
}

void	ft_putstr_col(char *str, char *color, char *colreset)
{
	ft_putstr(color);
	ft_putstr(str);
	ft_putstr(colreset);
}

void	ft_putendl_col(char *str, char *color, char *colreset)
{
	ft_putstr(color);
	ft_putstr(str);
	ft_putendl(colreset);
}

void	ft_putendl(char const *s)
{
	if (s)
	{
		write(1, s, strlen(s));
		write(1, "\n", 1);
	}
}

int		ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
	}
	return (0);
}

void	ft_strdel(char **as)
{
	if (as)
	{
		free(*as);
		*as = NULL;
	}
}
