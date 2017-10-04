#include "libunit.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	if (!(str = (char *)malloc(sizeof(*str) * (size + 1))))
		exit(1);
	str[size] = '\0';
	while (size--)
		str[size] = '\0';
	return (str);
}

static char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (strdup(s2));
	if (!s2)
		return (strdup(s1));
	tmp = ft_strnew(strlen(s1) + strlen(s2));
	strcat(strcpy(tmp, s1), s2);
	return (tmp);
}

void	ft_connect_stdout(int *pfd, int *save)
{
	*save = dup(1);
	if (pipe(pfd) == -1)
		exit(1);
	if (dup2(pfd[1], 1) == -1)
		exit(1);
}

char	*ft_get_stdout(int *pfd, int *save)
{
	char	*rslt;
	char	*tmp;
	char	buff[READ_SIZE + 1];

	fflush(stdout);
	rslt = ft_strnew(0);
	close(pfd[1]);
	close(1);
	bzero(buff, READ_SIZE + 1);
	while (read(pfd[0], buff, READ_SIZE) > 0)
	{
		tmp = rslt;
		rslt = ft_strjoin(tmp, buff);
		free(tmp);
		bzero(buff, READ_SIZE + 1);
	}
	close(pfd[0]);
	dup2(*save, 1);
	close(*save);
	return (rslt);
}
