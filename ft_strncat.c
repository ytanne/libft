/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorazaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 14:43:37 by yorazaye          #+#    #+#             */
/*   Updated: 2019/09/22 09:52:20 by yorazaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	if (ft_strlen(s2) < n)
		ft_strcpy(s1 + ft_strlen(s1), s2);
	else
	{
		ft_strncpy(s1 + ft_strlen(s1), s2, n);
		s1[ft_strlen(s1) + n] = '\0';
	}
	return (s1);
}
