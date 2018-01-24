#sed -i 's/ft_strdel(\&data.s1);/ft_write_debug(\"toto\", data, ret);\nft_strdel(\&data.s1);/' "$1"
sed -i 's/ft_strdel(\&data.s1);/toto;\nft_strdel(\&data.s1);/' "$1"
#ft_strdel(&data.s1);
#ft_write_debug("toto", data, ret);

