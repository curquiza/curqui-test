
NAME = libft.a

FLAG = -Wall -Wextra -Werror
CC = gcc $(FLAG)

DIR_SRC = srcs
DIR_OBJ = objs
DIR_INCL = includes

SRC = $(addprefix $(DIR_SRC)/, \
	  ft_memset.c \
	  ft_bzero.c \
	  ft_memcpy.c \
	  ft_memccpy.c \
	  ft_memmove.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_strlen.c \
	  ft_strdup.c \
	  ft_strcpy.c \
	  ft_strncpy.c \
	  ft_strcat.c \
	  ft_strncat.c \
	  ft_strlcat.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strstr.c \
	  ft_strnstr.c \
	  ft_strcmp.c \
	  ft_strncmp.c \
	  ft_atoi.c \
	  ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_memalloc.c \
	  ft_memdel.c \
	  ft_strnew.c \
	  ft_strdel.c \
	  ft_strclr.c \
	  ft_striter.c \
	  ft_striteri.c \
	  ft_strmap.c \
	  ft_strmapi.c \
	  ft_strequ.c \
	  ft_strnequ.c \
	  ft_strsub.c \
	  ft_strjoin.c \
	  ft_strtrim.c \
	  ft_strsplit.c \
	  ft_itoa.c \
	  ft_putchar.c \
	  ft_putstr.c \
	  ft_putendl.c \
	  ft_putnbr.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \
	  ft_lstnew.c \
	  ft_lstdelone.c \
	  ft_lstdel.c \
	  ft_lstadd.c \
	  ft_lstiter.c \
	  ft_lstmap.c \
	  ft_countwords.c \
	  ft_intlen.c \
	  ft_lstlen.c \
	  ft_lstadd_back.c \
	  ft_lstlast.c \
	  ft_lstat.c \
	  get_next_line.c \
	  ft_intlen_base.c \
	  ft_itoa_base.c \
	  ft_putnbr_endl.c \
	  ft_puttab.c \
	  ft_putinttab.c \
	  ft_strdeldup.c \
	  ft_convbase.c \
	  ft_tablen.c \
	  ft_sorttab_ascii.c \
	  ft_ullintlen.c \
	  ft_putstr_col.c \
	  ft_putendl_col.c \
	  ft_putnbr_col.c \
	  ft_tabdup.c \
	  ft_tabdel.c \
	  ft_strjoin3.c \
	  ft_exit.c \
	  ft_putendl2_fd.c \
	  ft_putendl3_fd.c \
	  ft_strupper.c \
	  ft_strlower.c \
	  ft_putnbr2.c \
	  ft_memjoin.c)

OBJ_DIR = objs/
OBJ = $(SRC:$(DIR_SRC)/%.c=$(DIR_OBJ)/%.o)

all : $(NAME)

$(NAME) : $(OBJ) 
	@ar rc $@ $^
	@ranlib $@
	@printf  "%-45s\033[1;32m%s\033[0m\n" "Make $@" "OK"

$(DIR_OBJ)/%.o: $(DIR_SRC)/%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) -I $(DIR_INCL) -c $< -o $@

clean :
	@rm -rf $(OBJ_DIR)

fclean : clean
	@rm -f $(NAME)

re : fclean all
