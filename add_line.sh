str_test=`grep 'ft_printf' < conv_bigc/a01_basic_01.c| cut -d "(" -f 2 | tr -d ');' | tr -d '"'`
str_test=\"$str_test\"
echo $str_test

sed "s/ft_strdel(&data.s1);/ft_write_debug($str_test, data, ret);\\
	ft_strdel(\&data.s1);/"\
	conv_bigc/a01_basic_01.c
