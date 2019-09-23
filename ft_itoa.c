/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorazaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 18:07:17 by yorazaye          #+#    #+#             */
/*   Updated: 2019/09/21 14:33:31 by yorazaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(int n)
{
	size_t	l;

	l = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		l++;
	}
	return (l);
}

char			*ft_itoa(int n)
{
	char	*r;
	int		l;

	if (n == -2147483648)
		return ("-2147483648");
	else if (n < 0 && n != -2147483648)
	{
		n *= -1;
		l = ft_intlen(n) + 1;
	}
	else
		l = ft_intlen(n);
	r = ft_strnew(l);
	r = ft_memset(r, '-', l);
	if (!r)
		return (NULL);
	r[l--] = '\0';
	while (l >= 0)
	{
		r[l--] = n % 10 + '0';
		n /= 10;
		if (n == 0)
			break ;
	}
	return (r);
}
