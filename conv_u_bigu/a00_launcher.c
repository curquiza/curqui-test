#include "conv_u_bigu_test.h"

int		conv_u_bigu_launcher(int *success, int *total)
{
	t_test	*test;

	test = NULL;
	ft_putendl_col("---- CONVERSIONS u-U --------------------", B_YELLOW, DEF);
	ft_putendl("");
	ft_load_test(&test, "basic_01", &u_basic_01);
	ft_load_test(&test, "basic_02", &u_basic_02);
	ft_load_test(&test, "basic_03", &u_basic_03);
	ft_load_test(&test, "basic_04", &u_basic_04);
	ft_load_test(&test, "modifiers_01", &u_modifiers_01);
	ft_load_test(&test, "modifiers_02", &u_modifiers_02);
	ft_load_test(&test, "modifiers_03", &u_modifiers_03);
	ft_load_test(&test, "modifiers_04", &u_modifiers_04);
	ft_load_test(&test, "modifiers_05", &u_modifiers_05);
	ft_load_test(&test, "modifiers_06", &u_modifiers_06);
	ft_load_test(&test, "precision_01", &u_precision_01);
	ft_load_test(&test, "precision_02", &u_precision_02);
	ft_load_test(&test, "precision_03", &u_precision_03);
	ft_load_test(&test, "precision_04", &u_precision_04);
	ft_load_test(&test, "precision_05", &u_precision_05);
	ft_load_test(&test, "precision_06", &u_precision_06);
	ft_load_test(&test, "padding_01", &u_padding_01);
	ft_load_test(&test, "padding_02", &u_padding_02);
	ft_load_test(&test, "padding_03", &u_padding_03);
	ft_load_test(&test, "padding_04", &u_padding_04);
	ft_load_test(&test, "padding_05", &u_padding_05);
	ft_load_test(&test, "padding_06", &u_padding_06);
	ft_load_test(&test, "all_01", &u_all_01);
	ft_load_test(&test, "all_02", &u_all_02);
	ft_load_test(&test, "all_03", &u_all_03);
	ft_load_test(&test, "all_04", &u_all_04);
	return(ft_launch_tests(&test, success, total));
}
