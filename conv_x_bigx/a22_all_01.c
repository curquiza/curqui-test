#include "conv_x_bigx_test.h"

int		x_all_01(void)
{
	t_data	data;
	int		pfd[2];
	int		ret;
	int		save_stdout;

	ft_write_test_name("test%---10.6x et %01hhX !!\\n, 0xaabb, (unsigned char)0");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf("test%---10.6x et %01hhX !!\n", 0xaabb, (unsigned char)0);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf("test%---10.6x et %01hhX !!\n", 0xaabb, (unsigned char)0);
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
