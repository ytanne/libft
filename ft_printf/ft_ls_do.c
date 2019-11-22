/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls_do.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorazaye <yorazaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 15:31:58 by yorazaye          #+#    #+#             */
/*   Updated: 2019/11/18 12:36:34 by yorazaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_ls_di(intmax_t *nbr, t_print *t, va_list av)
{
	if (t->s_l == 0)
		(*nbr) = (signed char)va_arg(av, int);
	else if (t->s_l == 1)
		(*nbr) = (short int)va_arg(av, int);
	else if (t->s_l == 2)
		(*nbr) = va_arg(av, long int);
	else if (t->s_l == 3)
		(*nbr) = (long long int)va_arg(av, long long int);
	else if (t->s_l == 4)
		(*nbr) = (size_t)va_arg(av, unsigned long long int);
	else
		(*nbr) = (int)va_arg(av, int);
}

void		ft_ls_uox(uintmax_t *nbr, t_print *t, va_list av)
{
	if (t->s_l == 0)
		(*nbr) = (unsigned char)va_arg(av, unsigned int);
	else if (t->s_l == 1)
		(*nbr) = (unsigned short int)va_arg(av, unsigned int);
	else if (t->s_l == 2)
		(*nbr) = va_arg(av, unsigned long int);
	else if (t->s_l == 3)
		(*nbr) = va_arg(av, unsigned long long int);
	else if (t->s_l == 4)
		(*nbr) = (size_t)va_arg(av, unsigned long long int);
	else
		(*nbr) = va_arg(av, unsigned int);
}

void		ft_ls_d(long double *nbr, t_print *t, va_list av)
{
	if (t->s_l == 5)
		(*nbr) = (long double)va_arg(av, long double);
	else
		(*nbr) = (double)va_arg(av, double);
}
