/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorazaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 13:36:02 by yorazaye          #+#    #+#             */
/*   Updated: 2019/09/22 16:19:31 by yorazaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_getsize(const char *s, char c)
{
	size_t	i;
	size_t	l;
	int		fl;

	i = 0;
	l = 0;
	while (s[i] != '\0')
	{
		fl = 0;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			fl = 1;
		}
		if (s[i] == '\0')
			fl = 1;
		if (fl == 1)
			l++;
		i++;
	}
	return (l);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**r;
	size_t	l;
	size_t	i;
	size_t	k;
	size_t	j;

	l = ft_getsize(s, c);
	i = 0;
	j = 0;
	k = 0;
	r = (char **)malloc(sizeof(char *) * l);
	if (!r)
		return (NULL);
	while (i < l && s[j] != '\0' && s[k] != '\0')
	{
		while (s[j] == c && s[j])
			j++;
		k = j;
		while (s[k] != c && s[k] != '\0')
			k++;
		r[i++] = ft_strsub(s, j, k - j);
		j = k;
	}
	return (r);
}
