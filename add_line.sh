str_test=`grep 'ft_printf' < conv_bigc/a01_basic_01.c | cut -d "(" -f 2 | tr -d ');' | tr -d '"'`
str_test=\"$str_test\"
echo "ft_write_debug($str_test, data, ret);"

sed -i '' "s/ft_strdel(&data.s1);/ft_write_debug($str_test, data, ret);\\
	ft_strdel(\&data.s1);/"\
	conv_bigc/a01_basic_01.c


#find . -type d \( -name "conv_*" -o -name "basics" -o -name "percent" -o -name "mixed" \) -exec find {} -name "*.c" \;
