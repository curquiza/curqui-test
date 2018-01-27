str_test="titi"
sed "s/ft_strdel(&data.s1);/ft_write_debug($str_test, data, ret);\\
	ft_strdel(\&data.s1);/"\
	conv_bigc/a01_basic_01.c
