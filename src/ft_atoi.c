/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorazaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 11:35:23 by yorazaye          #+#    #+#             */
/*   Updated: 2019/09/18 20:29:16 by yorazaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checksign(char *str)
{
	int flag;

	if (*str == '-')
	{
		flag = -1;
	}
	else if (*str == '+')
	{
		flag = 1;
	}
	else
		flag = 0;
	return (flag);
}

int		ft_atoi(char *str)
{
	int		result;
	int		temp;
	int		flag;

	result = 0;
	flag = 0;
	while ((*str == 9) || (*str == 32))
		str++;
	flag = checksign(str);
	if (flag != 0)
		str++;
	else
		flag = 1;
	while (*str != '\0')
	{
		temp = result;
		if ((*str < 48) || (*str > 57))
			return (flag * temp / 10);
		result += (*str - '0');
		if (*(str + 1) != '\0')
			result *= 10;
		str++;
	}
	return (result * flag);
}
