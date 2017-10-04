#include "libunit.h"

void	ft_connect_stdout(int *pfd, int *save)
{
	*save = dup(1);
	if (pipe(pfd) == -1)
		ft_exit("pipe error", 2);
	if (dup2(pfd[1], 1) == -1)
		ft_exit("dup2 error", 2);
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
		ft_strdel(&tmp);
		bzero(buff, READ_SIZE + 1);
	}
	close(pfd[0]);
	dup2(*save, 1);
	close(*save);
	return (rslt);
}
