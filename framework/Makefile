NAME = libunit.a

FLAG = -Wall -Wextra -Werror
#FLAG = -Wall -Wextra -Werror -g -fsanitize=address
CC = gcc $(FLAG)

DIR_SRC = srcs
SRC = $(addprefix $(DIR_SRC)/, \
	  display.c \
	  load_test.c \
	  launch_tests.c \
	  del_lst.c \
	  stdout_tool.c \
	  save_score.c \
	  get_score.c)

DIR_OBJ = objs
OBJ = $(SRC:$(DIR_SRC)/%.c=$(DIR_OBJ)/%.o)

LIB_DIR = ../libft

INCL_FLAG = -Iincludes -I$(LIB_DIR)/includes

all : $(NAME)

$(NAME) : $(OBJ)
	@#ar -x ../libft/libft.a
	@#ar rc $@ *.o $(OBJ)
	@#rm -rf *.o
	@ar rc $@ $^
	@ranlib $@
	@printf  "%-45s\033[1;32m%s\033[0m\n" "Make $@" "OK"

$(DIR_OBJ)/%.o : $(DIR_SRC)/%.c
	@mkdir -p $(DIR_OBJ)
	@$(CC) -c $< $(INCL_FLAG) -o $@

clean :
	@rm -rf $(DIR_OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all
