#include "conv_x_bigx_test.h"

int		x_all_05(void)
{
	t_data	data;
	int		pfd[2];
	int		ret;
	int		save_stdout;

	ft_write_test_name("%#.22zX et %020.14jx, 0xff1144ff1144, 0xffaabbccee");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf("%#.22zX et %020.14jx", 0xff1144ff1144, 0xffaabbccee);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf("%#.22zX et %020.14jx", 0xff1144ff1144, 0xffaabbccee);
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
