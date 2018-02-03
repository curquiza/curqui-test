#include "conv_s_test.h"

int		s_all_01(void)
{
	t_data	data;
	int		pfd[2];
	int		ret;
	int		save_stdout;

	ft_write_test_name("Coucou %.0s\\n%s%---12s, \"hi\", \"coco\", NULL");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf("Coucou %.0s\n%s%---12s", "hi", "coco", NULL);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf("Coucou %.0s\n%s%---12s", "hi", "coco", NULL);
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
