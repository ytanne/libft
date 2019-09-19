/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorazaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 13:20:30 by yorazaye          #+#    #+#             */
/*   Updated: 2019/09/18 21:13:05 by yorazaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	l_d;

	i = -1;
	l_d = ft_strlen(src);
	while (++i < len)
		dst[i] = src[i];	
	if (l_d < len)
		dst[i] = '\0';
	return (dst);
}
