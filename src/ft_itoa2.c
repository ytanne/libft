/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorazaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 18:01:13 by yorazaye          #+#    #+#             */
/*   Updated: 2019/09/20 18:04:39 by yorazaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_len(int n)
{
	int		temp;
	int		l;

	temp = n;
	l = 1;
	while (n / 10)
	{
		l++;
		n /= 10;
	}
	return (l);
}

static int	ft_pow(int base, int power)
{
	if (power == 0)
		return (1);
	return (base * ft_pow(base, power - 1));
}

char		*ft_itoa(int n)
{
	char	*r;
	int		i;
	int		l;
	int		sign;

	(n >= 0) ? (i = 0):(i = 1);
	(n >= 0) ? (sign = 1):(sign = -1);
	if (n == -2147483648)
	{
		i = 2;
		n = 147483648;
		l = ft_len(n) + 2;
		r = (char *)malloc(sizeof(char) * (l + 1));
		r[0] = '-';
		r[1] = '2';
	}
	else
	{
		n *= sign;
		(i == 0) ? (l = ft_len(n)):(l = (ft_len(n) + 1));
		r = (char *)malloc(sizeof(char) * (l + 1));
		if (i == 1)
			r[0] = '-';
	}
	while (i < l)
	{
		r[i] = n/ft_pow(10, (l - (i + 1))) + '0';
		n %= ft_pow(10, (l - (i + 1)));
		i++;
	}
	r[i] = '\0';
	return (r);
}
