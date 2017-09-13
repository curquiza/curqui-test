#include "conv_c_test.h"

int		conv_c_launcher(int *success, int *total)
{
	t_test	*test;

	test = NULL;
	ft_putendl_col("---- CONVERSION c -----------------------", B_YELLOW, DEF);
	ft_putendl("");
	ft_load_test(&test, "basic_01", &c_basic_01);
	ft_load_test(&test, "basic_02", &c_basic_02);
	ft_load_test(&test, "basic_03", &c_basic_03);
	ft_load_test(&test, "basic_04", &c_basic_04);
	ft_load_test(&test, "padding_01", &c_padding_01);
	ft_load_test(&test, "padding_02", &c_padding_02);
	ft_load_test(&test, "padding_03", &c_padding_03);
	ft_load_test(&test, "all_01", &c_all_01);
	return(ft_launch_tests(&test, success, total));
}
