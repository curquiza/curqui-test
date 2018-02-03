#include "conv_d_i_bigd_test.h"

int		d_all_04(void)
{
	t_data	data;
	int		pfd[2];
	int		ret;
	int		save_stdout;

	ft_write_test_name("% 20.12ld et % 05D% 4.8hi !, 0x11ffaa147, 24, (short)-2345");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf("% 20.12ld et % 05D% 4.8hi !", 0x11ffaa147, 24, (short)-2345);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf("% 20.12ld et % 05D% 4.8hi !", 0x11ffaa147, 24, (short)-2345);
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
