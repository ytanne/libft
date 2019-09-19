/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorazaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 15:56:37 by yorazaye          #+#    #+#             */
/*   Updated: 2019/09/18 20:12:31 by yorazaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	int		*ptr;
	size_t	i;
	void	*ptr2;

	i = 0;
	ptr = (int *)malloc(size);
	if (!ptr)
		return (NULL);
	else
	{
		while (i < size)
			ptr[i++] = 0;
	}
	ptr2 = (void *)ptr;
	return (ptr);
}
