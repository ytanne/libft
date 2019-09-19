/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorazaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 19:15:10 by yorazaye          #+#    #+#             */
/*   Updated: 2019/09/18 19:24:21 by yorazaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		r;

	i = 0;
	r = 0;
	while (i < n)
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			break ;
		r = s1[i] - s2[i];
		if (r != 0)
			return (r);
		i++;
	}
	return (r);
}
