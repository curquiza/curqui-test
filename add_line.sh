insert_line() {
	str_test=`grep 'ft_printf' < $1 | cut -d "(" -f 2 | tr -d ');' | tr -d '"'`
	str_test=\"$str_test\"

	echo "ft_write_debug($str_test, data, ret); in $1"

	sed -i '' "s/ft_strdel(&data.s1);/ft_write_debug($str_test, data, ret);\\
	ft_strdel(\&data.s1);/" \
	$1
}
files=`find . -type d \( -name "conv_*" -o -name "basics" -o -name "percent" -o -name "mixed" \) \
	-exec find {} -name "*.c" \;`

for i in $files; do
	insert_line $i
done
