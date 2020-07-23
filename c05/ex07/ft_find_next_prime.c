/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourdar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 13:41:27 by abourdar          #+#    #+#             */
/*   Updated: 2020/07/15 13:34:33 by abourdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;
	int max;

	i = 0;
	max = 46340;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (nb);
	if (nb < max)
		i = i - 1;
	while (max > 1)
	{
		if (nb % max == 0)
			i++;
		max--;
	}
	if (i == 0)
		return (1);
	return (0);
}

int	ft_find_next_prime(int nb)
{
	int i;

	i = nb;
	while (ft_is_prime(i) == 0)
		i++;
	return (i);
}
