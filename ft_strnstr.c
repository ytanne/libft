/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorazaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 10:35:19 by yorazaye          #+#    #+#             */
/*   Updated: 2019/09/24 16:29:33 by yorazaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		j = 0;
		while (needle[j] == haystack[i] && needle[j] != '\0' && i < len)
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
