/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorazaye <yorazaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 19:36:48 by yorazaye          #+#    #+#             */
/*   Updated: 2019/11/03 13:33:10 by yorazaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long long int	ft_pow(int nbr, int power)
{
	unsigned long long int	r;

	r = 1;
	while (power-- > 0)
		r *= nbr;
	return (r);
}
