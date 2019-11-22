/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oufxX.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorazaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 19:38:08 by yorazaye          #+#    #+#             */
/*   Updated: 2019/11/21 17:36:43 by yorazaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int				o_spec(va_list av, t_print *t)
{
	uintmax_t	nbr;
	int			l[4];
	char		sp;

	ft_ls_uox(&nbr, t, av);
	sp = (t->f_m == -1 && t->f_z == 1 && t->p_n == -1) ? '0' : ' ';
	l[0] = ft_numlen_base(nbr, 8);
	l[2] = (t->p_n != -1 && t->p_n > l[0]) ? t->p_n : l[0];
	t->w_n += (t->f_h == 1 && nbr != 0 && l[2] == l[0])
	? -l[2] - 1 : -l[2];
	l[1] = (t->w_n <= -1) ? 0 : t->w_n;
	l[1] += (t->f_h == 1 && nbr != 0) ? 1 : 0;
	l[3] = (t->p_n - l[0] >= 0) ? t->p_n - l[0] : 0;
	l[3] -= (t->p_n > 0 && nbr != 0 && t->f_h == 1) ? 1 : 0;
	o_av25(t, sp, &nbr, &(l[0]));
	(nbr == 0 && t->p_n == -1 && t->f_h == -1) ? ft_putstr("") :
	ft_putnbr_base(nbr, 8, 0);
	l[0] -= (nbr == 0 && t->p_n == -1 && l[1] == 0 && t->f_h == -1) ? 1 : 0;
	while ((t->f_m == 1) && t->w_n-- > 0)
		ft_putchar(sp);
	return (l[1] + l[0] + l[3]);
}

int				u_spec(va_list av, t_print *t)
{
	uintmax_t	nbr;
	int			l[4];
	char		sp;

	ft_ls_uox(&nbr, t, av);
	sp = (t->f_z == 1 && t->p_n == -1) ? '0' : ' ';
	l[0] = ft_numlen_uim(nbr);
	l[2] = (t->p_n != -1 && t->p_n > l[0]) ? t->p_n : l[0];
	t->f_s = (t->f_p == 1 && t->f_s == 1) ? 0 : t->f_s;
	t->w_n += -t->f_p - l[2] - t->f_s;
	l[1] = (t->w_n <= -1) ? 0 : t->w_n;
	l[3] = (t->p_n - l[0] >= 0) ? t->p_n - l[0] : 0;
	u_av25(t, sp, &nbr, &(l[0]));
	(nbr == 0 && t->p_n == -1) ? ft_putstr("") : ft_putnbr_uim(nbr);
	l[0] -= (nbr == 0 && t->p_n == -1) ? 1 : 0;
	while ((t->f_m == 1) && t->w_n-- > 0)
		ft_putchar(sp);
	return (l[1] + l[0] + l[3]);
}

int				x_spec(va_list av, t_print *t)
{
	uintmax_t	nbr;
	int			l[5];
	char		sp;

	ft_ls_uox(&nbr, t, av);
	sp = (t->f_m == -1 && t->f_z == 1 && t->p_n == -1) ? '0' : ' ';
	l[0] = ft_numlen_base(nbr, 16);
	l[2] = (t->p_n != -1 && t->p_n > l[0]) ? t->p_n : l[0];
	l[2] -= (nbr == 0 && t->p_n == 0) ? 1 : 0;
	t->w_n += (t->f_h == 1 && nbr != 0) ? -t->f_p - l[2] - 2 :
	-t->f_p - l[2];
	l[1] = (t->w_n <= -1) ? 0 : t->w_n;
	l[1] += (t->f_h == 1 && nbr != 0) ? 2 : 0;
	l[3] = 0;
	l[4] = (t->p_n - l[0] >= 0) ? t->p_n - l[0] : 0;
	x_av25(t, sp, &nbr, l);
	(nbr == 0 && t->p_n == -1 && (l[0]--)) ? ft_putstr("") :
	ft_putnbr_base(nbr, 16, 0);
	while ((t->f_m == 1) && t->w_n-- > 0)
		ft_putchar(sp);
	return (l[1] + l[0] + l[4]);
}

int				xl_spec(va_list av, t_print *t)
{
	uintmax_t	nbr;
	int			l[5];
	char		sp;

	ft_ls_uox(&nbr, t, av);
	sp = (t->f_m == -1 && t->f_z == 1 && t->p_n == -1) ? '0' : ' ';
	l[0] = ft_numlen_base(nbr, 16);
	l[2] = (t->p_n != -1 && t->p_n > l[0]) ? t->p_n : l[0];
	l[2] -= (nbr == 0 && t->p_n == 0) ? 1 : 0;
	t->f_s = (t->f_p == 1 && t->f_s == 1) ? 0 : t->f_s;
	t->w_n += (t->f_h == 1 && nbr != 0) ? -t->f_p - l[2] - t->f_s - 2 :
	-t->f_p - l[2] - t->f_s;
	l[1] = (t->w_n <= -1) ? 0 : t->w_n;
	l[1] += (t->f_h == 1 && nbr != 0) ? 2 : 0;
	l[3] = 1;
	l[4] = (t->p_n - l[0] >= 0) ? t->p_n - l[0] : 0;
	x_av25(t, sp, &nbr, l);
	(nbr == 0 && t->p_n == -1 && (l[0]--)) ? ft_putstr("") :
	ft_putnbr_base(nbr, 16, 1);
	while ((t->f_m == 1) && t->w_n-- > 0)
		ft_putchar(sp);
	return (l[1] + l[0] + l[4]);
}

int				f_spec(va_list av, t_print *t)
{
	int			r;
	int			prc;
	int			l[3];
	char		sp;
	long double	nbr;

	ft_ls_d(&nbr, t, av);
	sp = (t->f_z == 1 && t->f_m == -1) ? '0' : ' ';
	l[0] = ft_numlen_im((int)nbr);
	l[0] -= (nbr < 0.0 && t->f_p == 1) ? 1 : 0;
	t->p_n = (t->p_n == -1) ? 6 : t->p_n;
	t->f_s += (nbr < 0.0 && t->f_s == 1) ? -1 : 0;
	t->w_n += ((prc = t->p_n) > 0 || t->f_h == 1) ?
	-l[0] - prc - t->f_p - 1 - t->f_s : -l[0] - t->f_p - t->f_s;
	l[1] = (t->w_n <= -1) ? 0 : t->w_n;
	f_av25(t, sp, &nbr);
	l[2] = (t->f_s == 1 || nbr < 0 || t->f_p == 1) ? 1 : 0;
	r = (t->s_l != 5) ? ft_putd(nbr, prc, t, sp) :\
	ft_putd_l(nbr, prc, t, sp);
	while (t->f_m == 1 && t->w_n-- > 0)
		ft_putchar(' ');
	return (r + l[2] + l[1]);
}
