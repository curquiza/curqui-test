/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 12:15:31 by curquiza          #+#    #+#             */
/*   Updated: 2017/09/05 16:13:17 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

/*
** Colors
*/

# define DEF "\033[0m"
# define BLACK "\x1b[30m"
# define RED "\x1b[31m"
# define B_RED "\x1b[1;31m"
# define GREEN "\x1b[32m"
# define B_GREEN "\x1b[1;32m"
# define YELLOW "\x1b[33m"
# define B_YELLOW "\x1b[1;33m"
# define BLUE "\x1b[34m"
# define B_BLUE "\x1b[1;34m"
# define PINK "\x1b[35m"
# define B_PINK "\x1b[1;35m"
# define CYAN "\x1b[36m"
# define B_CYAN "\x1b[1;36m"
# define WHITE "\x1b[37m"

/*
** GNL project
*/

# include "get_next_line.h"

/*
** Libft project - Bases
*/

void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlen(const char *s);
char				*ft_strdup(const char *src);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *big, const char *little);
char				*ft_strnstr(const char *big, const char *little,
								size_t len);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(int n);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);

/*
** Libft project - Lists
*/

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list*lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

/*
** Libft projetc - Bonus
*/

int					ft_countwords(char const *s, char c);
int					ft_intlen(int n);
int					ft_lstlen(t_list *lst);
void				ft_lstadd_back(t_list **alst, t_list *new);
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstat(t_list *lst, size_t n);

/*
** My additionnal functions
*/

int					ft_intlen_base(int n, int base);
char				*ft_itoa_base(int value, int base);
void				ft_putnbr_endl(int n);
void				ft_puttab(char **tab);
void				ft_putinttab(int *tab, int size);
void				ft_strdeldup(char **dst, char *src);
char				*ft_convbase(char *value, int old_base, int new_base);
int					ft_tablen(char **tab);
void				ft_sorttab_ascii(char **tab);
int					ft_ullintlen(unsigned long long int n);
void				ft_putstr_col(char *str, char *color, char *colreset);
void				ft_putendl_col(char *str, char *color, char *colreset);
void				ft_putnbr_col(int n, char *color, char *colreset);
char				**ft_tabdup(char **tab);
void				ft_tabdel(char ***tab);
char				*ft_strjoin3(char *s1, char *s2, char *s3);
void				ft_exit(char *msg, int exit_value);
void				ft_putendl2_fd(char *s1, char *s2, int fd);
void				ft_putendl3_fd(char *s1, char *s2, char *s3, int fd);
void				ft_putnbr2(char *s, int nbr);
void				ft_strupper(char *s);
void				ft_strlower(char *s);
void				*ft_memjoin(void *s1, void *s2, size_t size1, size_t size2);

#endif
