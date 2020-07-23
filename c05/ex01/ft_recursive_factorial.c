/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourdar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:11:42 by abourdar          #+#    #+#             */
/*   Updated: 2020/07/15 15:04:56 by abourdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nbr)
{
	if (nbr < 0)
		return (0);
	if (nbr == 0 || nbr == 1)
		return (1);
	else if (nbr > 1)
	{
		nbr = nbr * ft_recursive_factorial(nbr - 1);
	}
	return (nbr);
}
