/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorazaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 09:32:17 by yorazaye          #+#    #+#             */
/*   Updated: 2019/09/19 15:19:05 by yorazaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp;

	tmp = ft_memalloc(len);
	ft_memcpy(tmp, src, len);
	ft_memcpy(dst, tmp, len);
	ft_memdel((void **)&tmp);
	return (dst);
}
