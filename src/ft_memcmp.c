/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorazaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 10:32:19 by yorazaye          #+#    #+#             */
/*   Updated: 2019/09/17 11:48:33 by yorazaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		r;
	char	*str1;
	char	*str2;
	
	str1 = (char *)s1;
	str2 = (char *)s2;
	r = 0;
	while (n-- > 0)
	{
		r = *(str1++) - *(str2++);
		if (r != 0)
			return ((int)r);
	}
	return ((int)r);
}
