#include "conv_s_test.h"

int		conv_s_launcher(int *success, int *total)
{
	t_test	*test;

	test = NULL;
	ft_putendl_col("---- CONVERSION s -----------------------", B_YELLOW, DEF);
	ft_putendl("");
	ft_load_test(&test, "basic_01", &s_basic_01);
	ft_load_test(&test, "basic_02", &s_basic_02);
	ft_load_test(&test, "basic_03", &s_basic_03);
	ft_load_test(&test, "precision_01", &s_precision_01);
	ft_load_test(&test, "precision_02", &s_precision_02);
	ft_load_test(&test, "precision_03", &s_precision_03);
	ft_load_test(&test, "precision_04", &s_precision_04);
	ft_load_test(&test, "precision_05", &s_precision_05);
	ft_load_test(&test, "padding_01", &s_padding_01);
	ft_load_test(&test, "padding_02", &s_padding_02);
	ft_load_test(&test, "padding_03", &s_padding_03);
	ft_load_test(&test, "padding_04", &s_padding_04);
	ft_load_test(&test, "all_01", &s_all_01);
	ft_load_test(&test, "all_02", &s_all_02);
	ft_load_test(&test, "all_03", &s_all_03);
	return(ft_launch_tests(&test, success, total));
}
