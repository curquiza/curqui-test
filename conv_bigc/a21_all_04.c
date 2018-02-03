#include "conv_bigc_test.h"

int		bigc_all_04(void)
{
	t_data	data;
	int		pfd[2];
	int		ret;
	int		save_stdout;

	ft_write_test_name("yo%2C%-12lc et %C titi %C tyty, 'u', 254, 256, 'a'");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf("yo%2C%-12lc et %C titi %C tyty", 'u', 254, 256, 'a');
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf("yo%2C%-12lc et %C titi %C tyty", 'u', 254, 256, 'a');
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
