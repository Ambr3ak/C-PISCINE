/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourdar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 15:30:20 by abourdar          #+#    #+#             */
/*   Updated: 2020/07/05 09:46:47 by abourdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_incremente_nbr(char a, char b, char c)
{
	while (a <= 57)
	{
		while (b <= 57)
		{
			while (c <= 57)
			{
				if (!(a == b || b == c || a == c))
				{
					write(1, &a, 1);
					write(1, &b, 1);
					write(1, &c, 1);
					c++;
				}
				if (a < 55)
					write(1, ", ", 2);
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
		c = b + 1;
	}
}

void	ft_print_comb(void)
{
	ft_incremente_nbr(48, 49, 50);
}
