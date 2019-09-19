/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorazaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 21:17:31 by yorazaye          #+#    #+#             */
/*   Updated: 2019/09/18 08:11:11 by yorazaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	const size_t slen = ft_strlen(src);
	size_t dlen = ft_strlen(dst);

	if (dlen > dstsize)
		dlen = dstsize;
	if (dlen == dstsize)
		return (dstsize + slen);
	if (slen < dstsize - dlen)
		ft_memcpy(dst + dlen, src, slen + 1);
	else
	{
		ft_memcpy(dst + dlen, src, dstsize - 1);
		dst[dstsize + dlen - 1] = '\0';
	}
	return (dlen + slen);
}
