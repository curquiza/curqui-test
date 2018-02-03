#include "conv_bigc_test.h"

int		bigc_all_03(void)
{
	t_data	data;
	int		pfd[2];
	int		ret;
	int		save_stdout;

	setlocale(LC_ALL, "");
	ft_write_test_name("%6C et coco %C titi %C tyty, 3250, 0xd800, 'u'");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf("%6C et coco %C titi %C tyty", 3250, 0xd800, 'u');
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf("%6C et coco %C titi %C tyty", 3250, 0xd800, 'u');
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
