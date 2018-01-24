#include "libunit.h"

void	ft_write_debug(char *str_test, t_data data, int ret)
{
	int		fd;

	if ((fd = open("rslt_trace.txt", O_RDWR | O_TRUNC | O_CREATE)) < 0)
		return ;
	
	close(fd)
}
