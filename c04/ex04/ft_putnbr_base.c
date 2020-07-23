/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourdar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 08:29:51 by abourdar          #+#    #+#             */
/*   Updated: 2020/07/21 10:44:55 by abourdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr, int i, char *base)
{
	long nb;

	nb = nbr;

	if (nb >= i)
	{
		ft_putnbr(nb / i, i, base);
		ft_putchar(base[nb % i]);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * -1, i, base);
	}
	else
		ft_putchar(base[nb % i]);
}

int		ft_is_base(char *base)
{
	int i;
	int j;

	i = 0;
	j = i + 1;
	while (base[i])
	{
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;

	i = 0;
	if (ft_is_base(base))
	{
		while (base[i])
		{
			if (!(base[i]) || base[i] == '-' || base[i] == '+')
				return ;
			i++;
		}
		if (i <= 1)
			return ;
		else
			ft_putnbr(nbr, i, base);
	}
}

int main()
{
	ft_putnbr_base(-2147483648, "xo");
	return 0;
}
