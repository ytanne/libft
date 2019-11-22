/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extra.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorazaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 17:34:01 by yorazaye          #+#    #+#             */
/*   Updated: 2019/11/21 17:33:52 by yorazaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		get_fwpl(char *str, t_print **t)
{
	int		i;

	i = -1;
	while (++i < 4)
		g_fwpl[i]((char *)str, t);
}

int			end_it_pls(va_list av, t_print **t, int numb)
{
	delete_str(t);
	va_end(av);
	return (numb);
}

void		get_started(int *count, t_print **t)
{
	count[0] = 0;
	count[1] = 0;
	*t = new_str();
}
