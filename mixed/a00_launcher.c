#include "mixed_test.h"

int		mixed_launcher(int *success, int *total)
{
	t_test	*test;

	test = NULL;
	ft_putendl_col("---- ALL MIXED --------------------------", B_YELLOW, DEF);
	ft_putendl("");
	ft_load_test(&test, "test_01", &mix_test_01);
	ft_load_test(&test, "test_02", &mix_test_02);
	ft_load_test(&test, "test_03", &mix_test_03);
	ft_load_test(&test, "test_04", &mix_test_04);
	ft_load_test(&test, "test_05", &mix_test_05);
	return(ft_launch_tests(&test, success, total));
}
