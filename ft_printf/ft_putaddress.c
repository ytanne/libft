/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorazaye <yorazaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 13:27:59 by yorazaye          #+#    #+#             */
/*   Updated: 2019/11/21 17:34:50 by yorazaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		ft_numlen_ll(unsigned long long int nb, int base)
{
	int		l;

	if (nb <= 0)
	{
		l = 1;
		nb *= -1;
	}
	else
		l = 0;
	while (nb)
	{
		l++;
		nb /= base;
	}
	return (l);
}

int				ft_putaddress(uintmax_t value)
{
	char					*c;
	int						l;

	if (value == 0)
	{
		ft_putstr("0");
		return (1);
	}
	l = ft_numlen_ll(value, 16);
	c = ft_strnew(l);
	c[l] = '\0';
	while (l >= 0)
	{
		if (value % 16 <= 9)
			c[--l] = value % 16 + '0';
		else
			c[--l] = value % 16 - 10 + 'a';
		value /= 16;
	}
	ft_putstr(c);
	ft_strdel(&c);
	return (l);
}

int				pr_spec(va_list av, t_print *t)
{
	char		pc;
	char		sp;
	int			l;

	av = 0;
	pc = '%';
	sp = (t->f_z == 1 && t->f_m == -1) ? '0' : ' ';
	t->w_n -= 1;
	l = (t->w_n == -1) ? 0 : t->w_n;
	while ((t->f_m == -1) && t->w_n-- > 0)
		ft_putchar(sp);
	ft_putchar(pc);
	while ((t->f_m == 1) && t->w_n-- > 0)
		ft_putchar(sp);
	return (1 + l);
}
