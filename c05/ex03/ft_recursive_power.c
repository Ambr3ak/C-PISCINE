/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourdar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 15:28:30 by abourdar          #+#    #+#             */
/*   Updated: 2020/07/15 10:56:19 by abourdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (nb = 1);
	if (power <= 0)
		return (0);
	else if (power >= 1)
	{
		nb *= ft_recursive_power(nb, power - 1);
	}
	return (nb);
}
