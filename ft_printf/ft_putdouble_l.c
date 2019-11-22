/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdouble_l.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorazaye <yorazaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 17:19:37 by yorazaye          #+#    #+#             */
/*   Updated: 2019/11/21 17:37:49 by yorazaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static long double	ft_roundup(long double n, int afterpoint)
{
	long double	pwr;
	long double tmp;

	tmp = n;
	pwr = ft_pow_ui(afterpoint);
	while (afterpoint--)
	{
		tmp *= 10.0;
		tmp = tmp - (long double)((int)tmp);
	}
	if (tmp > 0.5)
		n = n + 0.5 / pwr;
	return (n);
}

static void			deal_ap(int ap, long double rr)
{
	int			first;

	ft_putchar('.');
	while (ap--)
	{
		rr *= 10.0;
		first = (int)rr;
		rr -= (long double)(first);
		ft_putnbr(first);
	}
}

int					ft_putd_l(long double n, int ap,
t_print *t, char sp)
{
	int			temp;
	intmax_t	first;
	long double	remainder;

	temp = ap;
	if (n >= 0 && t->f_p == 1 && sp == ' ')
		ft_putchar('+');
	if (n < 0 && (n *= -1) && sp == ' ')
		ft_putchar('-');
	first = (intmax_t)n;
	if ((remainder = n - (long double)first) < 0)
		remainder *= -1;
	remainder = ft_roundup(remainder, ap);
	first += (t->p_n != 6 || first != 0) ? (int)remainder : 0;
	remainder -= ((int)remainder > 0
	&& (t->p_n != 6 || first != 0)) ? 1.0 : 0.0;
	ft_putnbr_im((intmax_t)first);
	if (ap == 0 && t->f_h == -1)
		return (ft_numlen_im(first));
	deal_ap(ap, remainder);
	return (ft_numlen_im(first) + 1 + temp);
}
