#include "mixed_test.h"

int		mix_test_01(void)
{
	t_data	data;
	int		pfd[2];
	int		ret;
	int		save_stdout;

	ft_write_debug("test %-12i et %--2.4s %24s !\\n, 0, NULL, cooc", data, ret);
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf("test %-12i et %--2.4s %24s !\n", 0, NULL, "cooc");
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf("test %-12i et %--2.4s %24s !\n", 0, NULL, "cooc");
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	ret = 0;
	if (data.r1 != data.r2)
		ret = -1;
	if (ft_strcmp(data.s1, data.s2))
		ret = -1;
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	return (ret);
}
