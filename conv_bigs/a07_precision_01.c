#include "conv_bigs_test.h"

int		bigs_precision_01(void)
{
	t_data	data;
	int		pfd[2];
	int		ret;
	int		save_stdout;
	wchar_t	s[4];

	setlocale(LC_ALL, "");
	s[0] = 0x53;
	s[1] = 0x3abc;
	s[2] = 0x81000;
	s[3] = '\0';
	ft_write_test_name("%.9ls, s");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf("%.9ls", s);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf("%.9ls", s);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	ret = 0;
	if (data.r1 != data.r2)
		ret = -1;
	if (ft_strcmp(data.s1, data.s2))
		ret = -1;
	ft_write_rslt(data, ret);
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	return (ret);
}
