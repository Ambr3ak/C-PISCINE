/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourdar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:50:54 by abourdar          #+#    #+#             */
/*   Updated: 2020/07/15 13:39:41 by abourdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;

	i = nb;
	if (power == 0)
		return (nb = 1);
	if (power <= 0)
		return (0);
	while (power != 1)
	{
		nb *= i;
		power--;
	}
	return (nb);
}
