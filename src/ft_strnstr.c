/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorazaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 10:35:19 by yorazaye          #+#    #+#             */
/*   Updated: 2019/09/18 11:04:06 by yorazaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (len > ft_strlen(haystack))
		len = ft_strlen(haystack);
	while (i < len)
	{
		j = 0;
		while (needle[j] == haystack[i] && needle[j] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)(haystack + i - ft_strlen(needle)));
		i++;
	}
	return (NULL);
}		
