/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_struct.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorazaye <yorazaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 00:20:43 by yorazaye          #+#    #+#             */
/*   Updated: 2019/11/18 13:25:26 by yorazaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_print		*new_str(void)
{
	t_print		*t;

	t = (t_print *)malloc(sizeof(t_print));
	return (t);
}

int			reset_str(t_print **t)
{
	(*t)->f_m = -1;
	(*t)->f_p = 0;
	(*t)->f_s = 0;
	(*t)->f_h = -1;
	(*t)->f_z = -1;
	(*t)->w_n = -1;
	(*t)->p_n = -1;
	(*t)->s_l = -1;
	return (1);
}

void		delete_str(t_print **t)
{
	free(*t);
	*t = NULL;
}
