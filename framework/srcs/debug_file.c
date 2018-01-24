#include "libunit.h"

void	ft_write_debug(char *str_test, t_data data, int ret)
{
	int		fd;

	(void)str_test;
	(void)ret;
	(void)data;
	if (ret == -1)
	{
		if ((fd = open("rslt_trace.txt", O_RDWR | O_APPEND | O_CREAT, 0666)) < 0)
			return ;
		dprintf(fd, "TEST : %s\n", str_test);
		dprintf(fd, "%-10s --> %s\n", "ft_printf", data.s1);
		dprintf(fd, "%s = %d\n", "ret", data.r1);
		dprintf(fd, "%-10s --> %s\n", "printf", data.s2);
		dprintf(fd, "%s = %d\n", "ret", data.r2);
		dprintf(fd, "-----------------------\n");
		close(fd);
	}
}
