#include "libunit.h"

void	ft_write_test_name(char *str_test)
{
	int		fd;

	if ((fd = open(DEBUG_FILE_NAME, O_RDWR | O_APPEND | O_CREAT, 0666)) < 0)
		return ;
	dprintf(fd, "TEST : %s\n", str_test);
	close(fd);
}

void	ft_write_rslt(t_data data, int ret)
{
	int		fd;

	if ((fd = open(DEBUG_FILE_NAME, O_RDWR | O_APPEND | O_CREAT, 0666)) < 0)
		return ;
	if (ret == -1)
	{
		dprintf(fd, "%-10s --> %s\n", "ft_printf", data.s1);
		dprintf(fd, "%s = %d\n", "ret", data.r1);
		dprintf(fd, "%-10s --> %s\n", "printf", data.s2);
		dprintf(fd, "%s = %d\n", "ret", data.r2);
	}
	close(fd);
}

void	ft_write_in_debug_file(t_test test)
{
	int		fd;

	if ((fd = open(DEBUG_FILE_NAME, O_RDWR | O_APPEND | O_CREAT, 0666)) < 0)
		return ;
	if (test.sigret == SIGSEGV)
		dprintf(fd, "[SEGV]\n");
	else if (test.sigret == SIGBUS)
		dprintf(fd, "[BUSE]\n");
	else if (test.sigret == SIGALRM)
		dprintf(fd, "[TIMEOUT]\n");
	else if (test.sigret == SIGABRT)
		dprintf(fd, "[ABORT]\n");
	else if (test.success == -1)
		dprintf(fd, "[KO]\n");
	else
		dprintf(fd, "[OK]\n");
	dprintf(fd, "-------------------------------------\n");
	close(fd);
}

void	ft_write_title(void)
{
	int		fd;

	if ((fd = open(DEBUG_FILE_NAME, O_RDWR | O_TRUNC | O_CREAT, 0666)) < 0)
		return ;
	dprintf(fd, "*************************************\n");
	dprintf(fd, "*************** TRACE ***************\n");
	dprintf(fd, "*************************************\n\n");
	close(fd);
}
