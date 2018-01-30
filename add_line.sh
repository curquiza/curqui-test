insert_line() {
	str_test=`grep 'ft_printf' < $1 | cut -c 22- | sed 's/);//g' | tr -d '"'`
	str_test=\"$str_test\"

	sed -i '' "s/ft_strdel(&data.s1);/ft_write_debug($str_test, data, ret);\\
	ft_strdel(\&data.s1);/" \
	$1
	echo "ft_write_debug($str_test, data, ret); in $1"
}

delete_line() {
	line=`grep "ft_write_debug" conv_bigs/a01_basic_01.c`
	sed -i '' "s/$line//" conv_bigs/a01_basic_01.c
}

#action_on_file() {
	
	#insert_line $1
#}

#files=`find . -type d \( -name "conv_*" -o -name "basics" -o -name "percent" -o -name "mixed" \) \
#	-exec find {} -name "*.c" \;`

#for i in $files; do
#	action_on_file $i
#done

delete_line

### Add '\"' but sed -i  doesn't work after the grep
#grep 'write_debug' < conv_s/a14_all_02.c | cut -d '"' -f 2 | cut -d ',' -f 1 | sed -i '' 's/^/\\\"/;s/$/\\\"/'
