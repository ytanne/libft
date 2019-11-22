/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fwpl.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorazaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 18:43:53 by yorazaye          #+#    #+#             */
/*   Updated: 2019/11/18 21:36:46 by yorazaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	flag_check(char *str, t_print **t)
{
	char	*flags;

	flags = "-+ #0";
	while (*str && ft_strchr(flags, *str) == 0)
		str++;
	while (*str)
	{
		if (*str == '-')
			(*t)->f_m = 1;
		else if (*str == '+')
			(*t)->f_p = 1;
		else if (*str == ' ')
			(*t)->f_s = 1;
		else if (*str == '#')
			(*t)->f_h = 1;
		else if (*str == '0')
			if (!*(str - 1) ||
				(*(str - 1) && !ft_isdigit(*(str - 1)) && *(str - 1) != '.'))
				(*t)->f_z = 1;
		str++;
	}
}

void	width_check(char *str, t_print **t)
{
	int		n;
	char	*dexz;

	n = 0;
	dexz = "123456789";
	while (*str && *str != '.' && ft_strchr(dexz, *str) == 0)
		str++;
	while (ft_isdigit(*str))
		n = n * 10 + *(str++) - '0';
	(*t)->w_n = n;
}

void	precision_check(char *str, t_print **t)
{
	int		n;

	n = 0;
	while (*str != '\0' && *str != '.')
		str++;
	if (*str == '\0')
		return ;
	while (ft_isdigit(*(++str)))
		n = n * 10 + (*str - '0');
	(*t)->p_n = n;
}

void	length_check(char *str, t_print **t)
{
	while (*str && ft_strchr("hlzL", *str) == 0)
		str++;
	if (*str == '\0')
		return ;
	if (*str == 'h' && *(str + 1) && *(str + 1) == 'h')
	{
		(*t)->s_l = 0;
		str += 2;
	}
	else if (*str == 'h')
		(*t)->s_l = 1;
	if (*str == 'l')
	{
		(*t)->s_l =\
		(*(++str) != '\0' && *str == 'l') ? 3 : 2;
	}
	else if (*str == 'z')
		(*t)->s_l = 4;
	else if (*str == 'L')
		(*t)->s_l = 5;
}
