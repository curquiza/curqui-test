#include "conv_b_test.h"

int		conv_b_launcher(int *success, int *total)
{
	t_test	*test;

	test = NULL;
	ft_putendl_col("---- BONUS - CONV b ---------------------", B_YELLOW, DEF);
	ft_putendl("");
	ft_load_test(&test, "basic_01", &b_basic_01);
	ft_load_test(&test, "basic_02", &b_basic_02);
	ft_load_test(&test, "basic_03", &b_basic_03);
	ft_load_test(&test, "basic_04", &b_basic_04);
	ft_load_test(&test, "basic_05", &b_basic_05);
	ft_load_test(&test, "basic_06", &b_basic_06);
	ft_load_test(&test, "modifiers_01", &b_modifiers_01);
	ft_load_test(&test, "modifiers_02", &b_modifiers_02);
	ft_load_test(&test, "modifiers_03", &b_modifiers_03);
	ft_load_test(&test, "modifiers_04", &b_modifiers_04);
	ft_load_test(&test, "modifiers_05", &b_modifiers_05);
	ft_load_test(&test, "modifiers_06", &b_modifiers_06);
	ft_load_test(&test, "padding_01", &b_padding_01);
	ft_load_test(&test, "padding_02", &b_padding_02);
	ft_load_test(&test, "padding_03", &b_padding_03);
	ft_load_test(&test, "padding_04", &b_padding_04);
	return(ft_launch_tests(&test, success, total));
}
