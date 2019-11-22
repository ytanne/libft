/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dipuxo_av25.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorazaye <yorazaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 16:01:59 by yorazaye          #+#    #+#             */
/*   Updated: 2019/11/18 13:43:08 by yorazaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			di_av25(t_print *t, char sp, intmax_t *nbr, int l)
{
	if (t->f_p == 1 && sp == '0' && *nbr >= 0)
		ft_putchar('+');
	l -= (*nbr < 0) ? 1 : 0;
	if (t->f_p == 0 && t->f_s == 1 && *nbr >= 0)
		ft_putchar(' ');
	if (sp == '0' && *nbr < 0 && (*nbr *= -1))
		ft_putchar('-');
	t->w_n += (*nbr == 0 && t->p_n == 0) ? 1 : 0;
	while ((t->f_m == -1) && t->w_n-- > 0)
		ft_putchar(sp);
	if (t->f_p == 1 && sp == ' ' && *nbr >= 0)
		ft_putchar('+');
	if (*nbr < 0)
		ft_putchar('-');
	while ((t->p_n--) - l > 0)
		ft_putchar('0');
}

void			u_av25(t_print *t, char sp, uintmax_t *nbr, int *l)
{
	t->w_n += (*nbr == 0 && t->p_n == 0) ? 1 : 0;
	while ((t->f_m == -1) && t->w_n-- > 0)
		ft_putchar(sp);
	while ((t->p_n--) - *l > 0)
		ft_putchar('0');
}

void			o_av25(t_print *t, char sp, uintmax_t *nbr, int *l)
{
	t->w_n += (*nbr == 0 && t->p_n == 0 && t->f_h == -1) ? 1 : 0;
	if (*nbr != 0 && t->f_h == 1 && sp == '0' && ((*l)++))
		ft_putstr("0");
	while ((t->f_m == -1) && t->w_n-- > 0)
		ft_putchar(sp);
	if (*nbr != 0 && t->f_h == 1 && sp == ' ' && ((*l)++))
		ft_putstr("0");
	while ((t->p_n--) - *l > 0)
		ft_putchar('0');
	*l -= (*nbr != 0 && t->f_h == 1) ? 1 : 0;
}

void			x_av25(t_print *t, char sp, uintmax_t *nbr, int *l)
{
	if (*nbr != 0 && t->f_h == 1 && sp == '0')
		(l[3] == 0) ? ft_putstr("0x") : ft_putstr("0X");
	while ((t->f_m == -1) && t->w_n-- > 0)
		ft_putchar(sp);
	if (*nbr != 0 && t->f_h == 1 && sp == ' ')
		(l[3] == 0) ? ft_putstr("0x") : ft_putstr("0X");
	while ((t->p_n--) - l[0] > 0)
		ft_putchar('0');
}

void			p_av25(t_print *t, char sp, int pc)
{
	if (t->f_z == 1 && (t->p_n < 0))
		ft_putstr("0x");
	while (t->f_m == -1 && t->w_n-- > 0)
		ft_putchar(sp);
	if (t->f_z == -1 || (t->p_n >= 0))
		ft_putstr("0x");
	while (pc-- > 0)
		ft_putchar('0');
}
