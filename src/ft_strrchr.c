/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorazaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 09:17:41 by yorazaye          #+#    #+#             */
/*   Updated: 2019/09/18 09:23:22 by yorazaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		l;

	l = ft_strlen(s);
	while (--l >= 0)
		if (s[l] == (char)c)
			return ((char *)(s + l));
	return (NULL);
}
