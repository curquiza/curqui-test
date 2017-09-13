#ifndef TEST_H
# define TEST_H

# include "libft.h"
# include "libunit.h"
# include <wchar.h>
# include <locale.h>

# define NB_TEST_TYPE 13

typedef struct	s_data
{
	int		r1;
	int		r2;
	char	*s1;
	char	*s2;
}				t_data;

int		ft_printf(char *s, ...);

int		basics_launcher(int *success, int *total);
int		conv_d_i_bigd_launcher(int *success, int *total);
int		conv_p_launcher(int *success, int *total);
int		conv_c_launcher(int *success, int *total);
int		conv_s_launcher(int *success, int *total);
int		conv_bigc_launcher(int *success, int *total);
int		conv_bigs_launcher(int *success, int *total);
int		conv_u_bigu_launcher(int *success, int *total);
int		conv_x_bigx_launcher(int *success, int *total);
int		conv_o_bigo_launcher(int *success, int *total);
int		percent_launcher(int *success, int *total);
int		mixed_launcher(int *success, int *total);

#endif
