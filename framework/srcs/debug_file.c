#include "libunit.h"

static void	ft_putstr_fd(char const *s, int fd)
{
	if (s)
		write(fd, s, strlen(s));
}

void	ft_write_debug(char *str_test, t_data data, int ret)
{
	int		fd;

	(void)str_test;
	(void)ret;
	(void)data;
	if ((fd = open("rslt_trace.txt", O_RDWR | O_TRUNC | O_CREAT)) < 0)
		return ;
	ft_putstr_fd("mimi", fd);
	
	close(fd);
}
