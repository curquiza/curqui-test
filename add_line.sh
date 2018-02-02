insert_line() {
	str_test=`grep 'ft_printf' < $1 | cut -c 22- | sed 's/);//g' | tr -d '"'`
	str_test=\"$str_test\"

	sed -i '' "1,/ft_connect_stdout/ s/ft_connect_stdout/ft_write_debug($str_test, data, ret);\\
	ft_connect_stdout/" \
	$1
	echo "ft_write_debug($str_test, data, ret); in $1"
}

#delete_line() {
#	line=`grep "ft_write_debug" $1
#	sed "/$line/d" $1
#}

#action_on_file() {
	
	#insert_line $1
#}

insert_line $1

#files=`find . -type d \( -name "conv_*" -o -name "basics" -o -name "percent" -o -name "mixed" \) \
#	-exec find {} -name "*.c" \;`

#for i in $files; do
#	action_on_file $i
#done

#delete_line

### Add '\"' but sed -i  doesn't work after the grep
#grep 'write_debug' < conv_s/a14_all_02.c | cut -d '"' -f 2 | cut -d ',' -f 1 | sed -i '' 's/^/\\\"/;s/$/\\\"/'
