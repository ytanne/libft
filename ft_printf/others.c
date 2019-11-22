/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   others.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorazaye <yorazaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 01:06:21 by yorazaye          #+#    #+#             */
/*   Updated: 2019/11/21 17:36:22 by yorazaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			ft_putnbr_im(intmax_t nbr)
{
	if (nbr < 0)
	{
		if ((unsigned long)nbr == -9223372036854775808U)
		{
			ft_putnbr(9);
			nbr = -223372036854775808;
		}
		nbr *= -1;
	}
	if (nbr > 9)
		ft_putnbr_im(nbr / 10);
	ft_putchar((nbr % 10) + '0');
}

void			ft_putnbr_uim(uintmax_t nbr)
{
	if (nbr > 9)
		ft_putnbr_uim(nbr / 10);
	ft_putchar((nbr % 10) + '0');
}

int				ft_numlen_im(intmax_t nbr)
{
	int			l;

	l = (nbr > 0) ? 0 : 1;
	while (nbr)
	{
		nbr /= 10;
		l++;
	}
	return (l);
}

int				ft_numlen_uim(uintmax_t nbr)
{
	int			l;

	l = (nbr > 0) ? 0 : 1;
	while (nbr)
	{
		nbr /= 10;
		l++;
	}
	return (l);
}
