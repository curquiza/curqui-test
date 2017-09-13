/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: curquiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 19:52:17 by curquiza          #+#    #+#             */
/*   Updated: 2017/09/13 19:52:30 by curquiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	ft_init_ftab(int (**f)(int *, int *))
{
	f[0] = &basics_launcher;
	f[1] = &conv_d_i_bigd_launcher;
	f[2] = &conv_u_bigu_launcher;
	f[3] = &conv_o_bigo_launcher;
	f[4] = &conv_x_bigx_launcher;
	f[5] = &conv_c_launcher;
	f[6] = &conv_bigc_launcher;
	f[7] = &conv_s_launcher;
	f[8] = &conv_bigs_launcher;
	f[9] = &conv_p_launcher;
	f[10] = &percent_launcher;
	f[11] = &mixed_launcher;
	f[12] = NULL;
}

static void	ft_init_test_name(char **tab)
{
	tab[0] = ft_strdup("Basic tests");
	tab[1] = ft_strdup("Conv d-i-D");
	tab[2] = ft_strdup("Conv u-U");
	tab[3] = ft_strdup("Conv o-O");
	tab[4] = ft_strdup("Conv x-X");
	tab[5] = ft_strdup("Conv c");
	tab[6] = ft_strdup("Conv C");
	tab[7] = ft_strdup("Conv s");
	tab[8] = ft_strdup("Conv S");
	tab[9] = ft_strdup("Conv p");
	tab[10] = ft_strdup("Percent");
	tab[11] = ft_strdup("Mixed tests");
	tab[12] = NULL;
}

static void	ft_run_tests(t_score **score, int (**f)(int *, int *), char **name)
{
	int		i;
	int		success;
	int		total;

	i = 0;
	while (f[i])
	{
		success = 0;
		total = 0;
		(f[i])(&success, &total);
		ft_save_score(score, name[i], success, total);
		i++;
		ft_putendl("\n");
	}
}

int			main(void)
{
	int		(*f[NB_TEST_TYPE + 1])(int *, int *);
	char	*test_name[NB_TEST_TYPE + 1];
	t_score	*score;

	ft_init_ftab(f);
	ft_init_test_name(test_name);
	ft_putendl("");
	ft_putendl_col("*****************************************", B_YELLOW, DEF);
	ft_putendl_col("********** PRINTF - CURQUITEST **********", B_YELLOW, DEF);
	ft_putendl_col("*****************************************", B_YELLOW, DEF);
	ft_putendl("");
	ft_run_tests(&score, f, test_name);
	ft_putendl("");
	ft_putendl_col("*****************************************", B_YELLOW, DEF);
	ft_putendl_col("**************** SUMMARY ****************", B_YELLOW, DEF);
	ft_putendl_col("*****************************************", B_YELLOW, DEF);
	ft_putendl("");
	return (ft_get_final_score(&score));
}
