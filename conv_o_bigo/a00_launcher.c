#include "conv_o_bigo_test.h"

int		conv_o_bigo_launcher(int *success, int *total)
{
	t_test	*test;

	test = NULL;
	ft_putendl_col("---- CONVERSIONS o-O --------------------", B_YELLOW, DEF);
	ft_putendl("");
	ft_load_test(&test, "basic_01", &o_basic_01);
	ft_load_test(&test, "basic_02", &o_basic_02);
	ft_load_test(&test, "basic_03", &o_basic_03);
	ft_load_test(&test, "basic_04", &o_basic_04);
	ft_load_test(&test, "basic_05", &o_basic_05);
	ft_load_test(&test, "basic_06", &o_basic_06);
	ft_load_test(&test, "flags_01", &o_flags_01);
	ft_load_test(&test, "flags_02", &o_flags_02);
	ft_load_test(&test, "flags_03", &o_flags_03);
	ft_load_test(&test, "modifiers_01", &o_modifiers_01);
	ft_load_test(&test, "modifiers_02", &o_modifiers_02);
	ft_load_test(&test, "modifiers_03", &o_modifiers_03);
	ft_load_test(&test, "modifiers_04", &o_modifiers_04);
	ft_load_test(&test, "modifiers_05", &o_modifiers_05);
	ft_load_test(&test, "modifiers_06", &o_modifiers_06);
	ft_load_test(&test, "precision_01", &o_precision_01);
	ft_load_test(&test, "precision_02", &o_precision_02);
	ft_load_test(&test, "precision_03", &o_precision_03);
	ft_load_test(&test, "precision_04", &o_precision_04);
	ft_load_test(&test, "precision_05", &o_precision_05);
	ft_load_test(&test, "precision_06", &o_precision_05);
	ft_load_test(&test, "precision_07", &o_precision_05);
	ft_load_test(&test, "padding_01", &o_padding_01);
	ft_load_test(&test, "padding_02", &o_padding_02);
	ft_load_test(&test, "padding_03", &o_padding_03);
	ft_load_test(&test, "padding_04", &o_padding_04);
	ft_load_test(&test, "padding_05", &o_padding_05);
	ft_load_test(&test, "padding_06", &o_padding_06);
	ft_load_test(&test, "padding_07", &o_padding_07);
	ft_load_test(&test, "padding_08", &o_padding_08);
	ft_load_test(&test, "all_01", &o_all_01);
	ft_load_test(&test, "all_02", &o_all_02);
	ft_load_test(&test, "all_03", &o_all_03);
	ft_load_test(&test, "all_04", &o_all_04);
	ft_load_test(&test, "all_05", &o_all_05);
	ft_load_test(&test, "all_06", &o_all_06);
	return(ft_launch_tests(&test, success, total));
}
