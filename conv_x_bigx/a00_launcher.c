#include "conv_x_bigx_test.h"

int		conv_x_bigx_launcher(int *success, int *total)
{
	t_test	*test;

	test = NULL;
	ft_putendl_col("---- CONVERSIONS x-X --------------------", B_YELLOW, DEF);
	ft_putendl("");
	ft_load_test(&test, "basic_01", &x_basic_01);
	ft_load_test(&test, "basic_02", &x_basic_02);
	ft_load_test(&test, "basic_03", &x_basic_03);
	ft_load_test(&test, "basic_04", &x_basic_04);
	ft_load_test(&test, "basic_05", &x_basic_05);
	ft_load_test(&test, "flags_01", &x_flags_01);
	ft_load_test(&test, "flags_02", &x_flags_02);
	ft_load_test(&test, "flags_03", &x_flags_03);
	ft_load_test(&test, "modifiers_01", &x_modifiers_01);
	ft_load_test(&test, "modifiers_02", &x_modifiers_02);
	ft_load_test(&test, "modifiers_03", &x_modifiers_03);
	ft_load_test(&test, "modifiers_04", &x_modifiers_04);
	ft_load_test(&test, "modifiers_05", &x_modifiers_05);
	ft_load_test(&test, "modifiers_06", &x_modifiers_06);
	ft_load_test(&test, "modifiers_07", &x_modifiers_07);
	ft_load_test(&test, "precision_01", &x_precision_01);
	ft_load_test(&test, "precision_02", &x_precision_02);
	ft_load_test(&test, "precision_03", &x_precision_03);
	ft_load_test(&test, "precision_04", &x_precision_04);
	ft_load_test(&test, "precision_05", &x_precision_05);
	ft_load_test(&test, "precision_06", &x_precision_06);
	ft_load_test(&test, "precision_07", &x_precision_07);
	ft_load_test(&test, "precision_08", &x_precision_08);
	ft_load_test(&test, "padding_01", &x_padding_01);
	ft_load_test(&test, "padding_02", &x_padding_02);
	ft_load_test(&test, "padding_03", &x_padding_03);
	ft_load_test(&test, "padding_04", &x_padding_04);
	ft_load_test(&test, "padding_05", &x_padding_05);
	ft_load_test(&test, "padding_06", &x_padding_06);
	ft_load_test(&test, "padding_07", &x_padding_07);
	ft_load_test(&test, "all_01", &x_all_01);
	ft_load_test(&test, "all_02", &x_all_02);
	ft_load_test(&test, "all_03", &x_all_03);
	ft_load_test(&test, "all_04", &x_all_04);
	ft_load_test(&test, "all_05", &x_all_05);
	ft_load_test(&test, "all_06", &x_all_06);
	ft_load_test(&test, "all_07", &x_all_07);
	ft_load_test(&test, "all_08", &x_all_08);
	ft_load_test(&test, "all_09", &x_all_09);
	return(ft_launch_tests(&test, success, total));
}
