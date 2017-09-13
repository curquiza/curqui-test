#include "conv_p_test.h"

int		conv_p_launcher(int *success, int *total)
{
	t_test	*test;

	test = NULL;
	ft_putendl_col("---- CONVERSION p -----------------------", B_YELLOW, DEF);
	ft_putendl("");
	ft_load_test(&test, "basic_01", &p_basic_01);
	ft_load_test(&test, "basic_02", &p_basic_02);
	ft_load_test(&test, "basic_03", &p_basic_03);
	ft_load_test(&test, "padding_01", &p_padding_01);
	ft_load_test(&test, "padding_02", &p_padding_02);
	ft_load_test(&test, "padding_03", &p_padding_03);
	ft_load_test(&test, "all_01", &p_all_01);
	return(ft_launch_tests(&test, success, total));
}
