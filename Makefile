NAME = ft_printf_tests

#CC = gcc
CC = gcc -Wall -Wextra -Werror
#CC = gcc -Wall -Wextra -Werror -g -fsanitize=address

SRC = $(addprefix main/, \
	  main.c \
	  tool.c) \
	  $(addprefix basics/, \
	  a00_launcher.c \
	  a01_test_01.c \
	  a02_test_02.c) \
	  $(addprefix conv_d_i_bigd/, \
	  a00_launcher.c \
	  a01_basic_01.c \
	  a02_basic_02.c \
	  a03_basic_03.c \
	  a04_basic_04.c \
	  a05_basic_05.c \
	  a06_flags_01.c \
	  a07_flags_02.c \
	  a08_flags_03.c \
	  a09_flags_04.c \
	  a10_flags_05.c \
	  a11_modifiers_01.c \
	  a12_modifiers_02.c \
	  a13_modifiers_03.c \
	  a14_modifiers_04.c \
	  a15_modifiers_05.c \
	  a16_modifiers_06.c \
	  a17_modifiers_07.c \
	  a18_basic_06.c \
	  a19_basic_07.c \
	  a20_basic_08.c \
	  a21_precision_01.c \
	  a22_precision_02.c \
	  a23_precision_03.c \
	  a24_precision_04.c \
	  a25_precision_05.c \
	  a26_padding_01.c \
	  a27_padding_02.c \
	  a28_padding_03.c \
	  a29_padding_04.c \
	  a30_padding_05.c \
	  a31_padding_06.c \
	  a32_padding_07.c \
	  a33_all_01.c \
	  a34_all_02.c \
	  a35_all_03.c \
	  a36_all_04.c \
	  a37_all_05.c \
	  a38_precision_06.c \
	  a39_precision_07.c) \
	  $(addprefix conv_p/, \
	  a00_launcher.c \
	  a01_basic_01.c \
	  a02_basic_02.c \
	  a03_basic_03.c \
	  a04_padding_01.c \
	  a05_padding_02.c \
	  a06_padding_03.c \
	  a07_all_01.c) \
	  $(addprefix conv_c/, \
	  a00_launcher.c \
	  a01_basic_01.c \
	  a02_basic_02.c \
	  a03_basic_03.c \
	  a04_basic_04.c \
	  a05_padding_01.c \
	  a06_padding_02.c \
	  a07_padding_03.c \
	  a08_all_01.c) \
	  $(addprefix conv_s/, \
	  a00_launcher.c \
	  a01_basic_01.c \
	  a02_basic_02.c \
	  a03_basic_03.c \
	  a04_precision_01.c \
	  a05_precision_02.c \
	  a06_precision_03.c \
	  a07_precision_04.c \
	  a08_precision_05.c \
	  a09_padding_01.c \
	  a10_padding_02.c \
	  a11_padding_03.c \
	  a12_padding_04.c \
	  a13_all_01.c \
	  a14_all_02.c \
	  a15_all_03.c) \
	  $(addprefix conv_bigc/, \
	  a00_launcher.c \
	  a01_basic_01.c \
	  a02_basic_02.c \
	  a03_basic_03.c \
	  a04_basic_04.c \
	  a05_basic_05.c \
	  a06_basic_06.c \
	  a07_basic_07.c \
	  a08_basic_08.c \
	  a09_basic_09.c \
	  a10_basic_10.c \
	  a11_basic_11.c \
	  a12_basic_12.c \
	  a13_basic_13.c \
	  a14_basic_14.c \
	  a15_padding_01.c \
	  a16_padding_02.c \
	  a17_padding_03.c \
	  a18_all_01.c \
	  a19_all_02.c \
	  a20_all_03.c \
	  a21_all_04.c \
	  a22_basic_15.c) \
	  $(addprefix conv_bigs/, \
	  a00_launcher.c \
	  a01_basic_01.c \
	  a02_basic_02.c \
	  a03_basic_03.c \
	  a04_basic_04.c \
	  a05_basic_05.c \
	  a06_basic_06.c \
	  a07_precision_01.c \
	  a08_precision_02.c \
	  a09_precision_03.c \
	  a10_precision_04.c \
	  a11_precision_05.c \
	  a12_precision_06.c \
	  a13_precision_07.c \
	  a14_precision_08.c \
	  a15_precision_09.c \
	  a16_padding_01.c \
	  a17_padding_02.c \
	  a18_padding_03.c \
	  a19_padding_04.c \
	  a20_padding_05.c \
	  a21_all_01.c \
	  a22_all_02.c \
	  a23_all_03.c) \
	  $(addprefix conv_u_bigu/, \
	  a00_launcher.c \
	  a01_basic_01.c \
	  a02_basic_02.c \
	  a03_basic_03.c \
	  a04_basic_04.c \
	  a05_modifiers_01.c \
	  a06_modifiers_02.c \
	  a07_modifiers_03.c \
	  a08_modifiers_04.c \
	  a09_modifiers_05.c \
	  a10_modifiers_06.c \
	  a11_precision_01.c \
	  a12_precision_02.c \
	  a13_precision_03.c \
	  a14_precision_04.c \
	  a15_padding_01.c \
	  a16_padding_02.c \
	  a17_padding_03.c \
	  a18_padding_04.c \
	  a19_padding_05.c \
	  a20_padding_06.c \
	  a21_all_01.c \
	  a22_all_02.c \
	  a23_all_03.c \
	  a24_all_04.c \
	  a25_precision_05.c \
	  a26_precision_06.c) \
	  $(addprefix conv_x_bigx/, \
	  a00_launcher.c \
	  a01_basic_01.c \
	  a02_basic_02.c \
	  a03_basic_03.c \
	  a04_basic_04.c \
	  a05_basic_05.c \
	  a06_flags_01.c \
	  a07_flags_02.c \
	  a08_flags_03.c \
	  a09_precision_01.c \
	  a10_precision_02.c \
	  a11_precision_03.c \
	  a12_precision_04.c \
	  a13_precision_05.c \
	  a14_precision_06.c \
	  a15_padding_01.c \
	  a16_padding_02.c \
	  a17_padding_03.c \
	  a18_padding_04.c \
	  a19_padding_05.c \
	  a20_padding_06.c \
	  a21_padding_07.c \
	  a22_all_01.c \
	  a23_all_02.c \
	  a24_all_03.c \
	  a25_all_04.c \
	  a26_all_05.c \
	  a27_all_06.c \
	  a28_modifiers_01.c \
	  a29_modifiers_02.c \
	  a30_modifiers_03.c \
	  a31_modifiers_04.c \
	  a32_modifiers_05.c \
	  a33_modifiers_06.c \
	  a34_modifiers_07.c \
	  a35_precision_07.c \
	  a36_precision_08.c \
	  a37_all_07.c \
	  a38_all_08.c \
	  a39_all_09.c) \
	  $(addprefix conv_o_bigo/, \
	  a00_launcher.c \
	  a01_basic_01.c \
	  a02_basic_02.c \
	  a03_basic_03.c \
	  a04_flags_01.c \
	  a05_flags_02.c \
	  a06_flags_03.c \
	  a07_modifiers_01.c \
	  a08_modifiers_02.c \
	  a09_modifiers_03.c \
	  a10_modifiers_04.c \
	  a11_modifiers_05.c \
	  a12_modifiers_06.c \
	  a13_basic_04.c \
	  a14_basic_05.c \
	  a15_basic_06.c \
	  a16_precision_01.c \
	  a17_precision_02.c \
	  a18_precision_03.c \
	  a19_precision_04.c \
	  a20_precision_05.c \
	  a21_padding_01.c \
	  a22_padding_02.c \
	  a23_padding_03.c \
	  a24_padding_04.c \
	  a25_padding_05.c \
	  a26_padding_06.c \
	  a27_padding_07.c \
	  a28_padding_08.c \
	  a29_all_01.c \
	  a30_all_02.c \
	  a31_all_03.c \
	  a32_all_04.c \
	  a33_precision_06.c \
	  a34_precision_07.c \
	  a35_all_05.c \
	  a36_all_06.c) \
	  $(addprefix mixed/, \
	  a00_launcher.c \
	  a01_test_01.c \
	  a02_test_02.c \
	  a03_test_03.c \
	  a04_test_04.c \
	  a05_test_05.c) \
	  $(addprefix percent/, \
	  a00_launcher.c \
	  a01_basic_01.c \
	  a02_flags_01.c \
	  a03_flags_02.c \
	  a04_flags_03.c \
	  a05_precision_01.c \
	  a06_precision_02.c \
	  a07_precision_03.c \
	  a08_precision_04.c \
	  a09_padding_01.c \
	  a10_padding_02.c \
	  a11_padding_03.c \
	  a12_all_01.c) \

OBJ = $(SRC:%.c=%.o)

UNIT_DIR = framework
UNIT = $(UNIT_DIR)/libunit.a

PROJ = libftprintf.a

INCL_FLAG = -I includes  -I $(UNIT_DIR)/includes
LIB_FLAG = -L. -lftprintf -L$(UNIT_DIR) -lunit

all : $(NAME)

$(UNIT) :
	@make -C $(UNIT_DIR)
	@echo "Be patient... ;)"

$(NAME) : $(PROJ) $(UNIT) $(OBJ)
	@$(CC) $(OBJ) -o $@ $(LIB_FLAG)
	@echo "\033[1;31m-- CURQUITEST EXEC -------------\033[0m"
	@printf  "%-45s\033[1;32m%s\033[0m\n" "Make $@" "OK"

%.o: %.c
	@$(CC) -o $@ -c $< $(INCL_FLAG)

clean :
	@make clean -C $(UNIT_DIR)
	@rm -f $(OBJ)

fclean : clean
	@make fclean -C $(UNIT_DIR)
	@rm -f $(NAME)

re : fclean all
