#include "libunit.h"

void	ft_write_test_name(char *str_test)
{
	int		fd;

	if ((fd = open("rslt_trace.txt", O_RDWR | O_APPEND | O_CREAT, 0666)) < 0)
		return ;
	dprintf(fd, "TEST : %s\n", str_test);
	close(fd);
}

void	ft_write_rslt(t_data data, int ret)
{
	int		fd;

	if ((fd = open("rslt_trace.txt", O_RDWR | O_APPEND | O_CREAT, 0666)) < 0)
		return ;
	if (ret == -1)
	{
		dprintf(fd, "KO\n");
		dprintf(fd, "%-10s --> %s\n", "ft_printf", data.s1);
		dprintf(fd, "%s = %d\n", "ret", data.r1);
		dprintf(fd, "%-10s --> %s\n", "printf", data.s2);
		dprintf(fd, "%s = %d\n", "ret", data.r2);
	}
	else
		dprintf(fd, "OK\n");
	dprintf(fd, "-----------------------\n");
	close(fd);
}
