#include "conv_bigs_test.h"

int		conv_bigs_launcher(int *success, int *total)
{
	t_test	*test;

	test = NULL;
	ft_putendl_col("---- CONVERSION S -----------------------", B_YELLOW, DEF);
	ft_putendl("");
	ft_load_test(&test, "basic_01", &bigs_basic_01);
	ft_load_test(&test, "basic_02", &bigs_basic_02);
	ft_load_test(&test, "basic_03", &bigs_basic_03);
	ft_load_test(&test, "basic_04", &bigs_basic_04);
	ft_load_test(&test, "basic_05", &bigs_basic_05);
	ft_load_test(&test, "basic_06", &bigs_basic_06);
	ft_load_test(&test, "precision_01", &bigs_precision_01);
	ft_load_test(&test, "precision_02", &bigs_precision_02);
	ft_load_test(&test, "precision_03", &bigs_precision_03);
	ft_load_test(&test, "precision_04", &bigs_precision_04);
	ft_load_test(&test, "precision_05", &bigs_precision_05);
	ft_load_test(&test, "precision_06", &bigs_precision_06);
	ft_load_test(&test, "precision_07", &bigs_precision_07);
	ft_load_test(&test, "precision_08", &bigs_precision_08);
	ft_load_test(&test, "precision_09", &bigs_precision_09);
	ft_load_test(&test, "padding_01", &bigs_padding_01);
	ft_load_test(&test, "padding_02", &bigs_padding_02);
	ft_load_test(&test, "padding_03", &bigs_padding_03);
	ft_load_test(&test, "padding_04", &bigs_padding_04);
	ft_load_test(&test, "padding_05", &bigs_padding_05);
	ft_load_test(&test, "all_01", &bigs_all_01);
	ft_load_test(&test, "all_02", &bigs_all_02);
	ft_load_test(&test, "all_03", &bigs_all_03);
	return(ft_launch_tests(&test, success, total));
}
