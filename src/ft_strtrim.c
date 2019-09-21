/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorazaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 12:12:44 by yorazaye          #+#    #+#             */
/*   Updated: 2019/09/20 13:28:26 by yorazaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	char	*r;
	size_t	l;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	l = ft_strlen(s);
	l--;
	while (s[l] == ' ' || s[l] == '\n' || s[l] == '\t')
		l--;
	r = ft_strnew(++l - i);
	if (!r)
		return (NULL);
	r = ft_strsub(s, i, l - i);
	return (r);
}
