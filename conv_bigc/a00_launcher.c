#include "conv_bigc_test.h"

int		conv_bigc_launcher(int *success, int *total)
{
	t_test	*test;

	test = NULL;
	ft_putendl_col("---- CONVERSION C -----------------------", B_YELLOW, DEF);
	ft_putendl("");
	ft_load_test(&test, "basic_01", &bigc_basic_01);
	ft_load_test(&test, "basic_02", &bigc_basic_02);
	ft_load_test(&test, "basic_03", &bigc_basic_03);
	ft_load_test(&test, "basic_04", &bigc_basic_04);
	ft_load_test(&test, "basic_05", &bigc_basic_05);
	ft_load_test(&test, "basic_06", &bigc_basic_06);
	ft_load_test(&test, "basic_07", &bigc_basic_07);
	ft_load_test(&test, "basic_08", &bigc_basic_08);
	ft_load_test(&test, "basic_09", &bigc_basic_09);
	ft_load_test(&test, "basic_10", &bigc_basic_10);
	ft_load_test(&test, "basic_11", &bigc_basic_11);
	ft_load_test(&test, "basic_12", &bigc_basic_12);
	ft_load_test(&test, "basic_13", &bigc_basic_13);
	ft_load_test(&test, "basic_14", &bigc_basic_14);
	ft_load_test(&test, "basic_15", &bigc_basic_15);
	ft_load_test(&test, "padding_01", &bigc_padding_01);
	ft_load_test(&test, "padding_02", &bigc_padding_02);
	ft_load_test(&test, "padding_03", &bigc_padding_03);
	ft_load_test(&test, "all_01", &bigc_all_01);
	ft_load_test(&test, "all_02", &bigc_all_02);
	ft_load_test(&test, "all_03", &bigc_all_03);
	ft_load_test(&test, "all_04", &bigc_all_04);
	return(ft_launch_tests(&test, success, total));
}
