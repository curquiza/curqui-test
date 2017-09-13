#include "conv_d_i_bigd_test.h"

int		conv_d_i_bigd_launcher(int *success, int *total)
{
	t_test	*test;

	test = NULL;
	ft_putendl_col("---- CONVERSIONS d-i-D ------------------", B_YELLOW, DEF);
	ft_putendl("");
	ft_load_test(&test, "basic_01", &d_basic_01);
	ft_load_test(&test, "basic_02", &d_basic_02);
	ft_load_test(&test, "basic_03", &d_basic_03);
	ft_load_test(&test, "basic_04", &d_basic_04);
	ft_load_test(&test, "basic_05", &d_basic_05);
	ft_load_test(&test, "basic_06", &d_basic_06);
	ft_load_test(&test, "basic_07", &d_basic_07);
	ft_load_test(&test, "basic_08", &d_basic_08);
	ft_load_test(&test, "flags_01", &d_flags_01);
	ft_load_test(&test, "flags_02", &d_flags_02);
	ft_load_test(&test, "flags_03", &d_flags_03);
	ft_load_test(&test, "flags_04", &d_flags_04);
	ft_load_test(&test, "flags_05", &d_flags_05);
	ft_load_test(&test, "modifiers_01", &d_modifiers_01);
	ft_load_test(&test, "modifiers_02", &d_modifiers_02);
	ft_load_test(&test, "modifiers_03", &d_modifiers_03);
	ft_load_test(&test, "modifiers_04", &d_modifiers_04);
	ft_load_test(&test, "modifiers_05", &d_modifiers_05);
	ft_load_test(&test, "modifiers_06", &d_modifiers_06);
	ft_load_test(&test, "modifiers_07", &d_modifiers_07);
	ft_load_test(&test, "precision_01", &d_precision_01);
	ft_load_test(&test, "precision_02", &d_precision_02);
	ft_load_test(&test, "precision_03", &d_precision_03);
	ft_load_test(&test, "precision_04", &d_precision_04);
	ft_load_test(&test, "precision_05", &d_precision_05);
	ft_load_test(&test, "precision_06", &d_precision_05);
	ft_load_test(&test, "precision_07", &d_precision_05);
	ft_load_test(&test, "padding_01", &d_padding_01);
	ft_load_test(&test, "padding_02", &d_padding_02);
	ft_load_test(&test, "padding_03", &d_padding_03);
	ft_load_test(&test, "padding_04", &d_padding_04);
	ft_load_test(&test, "padding_05", &d_padding_05);
	ft_load_test(&test, "padding_06", &d_padding_06);
	ft_load_test(&test, "padding_07", &d_padding_07);
	ft_load_test(&test, "all_01", &d_all_01);
	ft_load_test(&test, "all_02", &d_all_02);
	ft_load_test(&test, "all_03", &d_all_03);
	ft_load_test(&test, "all_04", &d_all_04);
	ft_load_test(&test, "all_05", &d_all_05);
	return (ft_launch_tests(&test, success, total));
}
