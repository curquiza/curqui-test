#include "percent_test.h"

int		percent_launcher(int *success, int *total)
{
	t_test	*test;

	test = NULL;
	ft_putendl_col("---- PERCENT ----------------------------", B_YELLOW, DEF);
	ft_putendl("");
	ft_load_test(&test, "basic_01", &percent_basic_01);
	ft_load_test(&test, "flags_01", &percent_flags_01);
	ft_load_test(&test, "flags_02", &percent_flags_02);
	ft_load_test(&test, "flags_03", &percent_flags_03);
	ft_load_test(&test, "precision_01", &percent_precision_01);
	ft_load_test(&test, "precision_02", &percent_precision_02);
	ft_load_test(&test, "precision_03", &percent_precision_03);
	ft_load_test(&test, "precision_04", &percent_precision_04);
	ft_load_test(&test, "padding_01", &percent_padding_01);
	ft_load_test(&test, "padding_02", &percent_padding_02);
	ft_load_test(&test, "padding_03", &percent_padding_03);
	ft_load_test(&test, "all_01", &percent_all_01);
	return(ft_launch_tests(&test, success, total));
}
