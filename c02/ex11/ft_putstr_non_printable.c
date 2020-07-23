/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourdar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 12:25:03 by abourdar          #+#    #+#             */
/*   Updated: 2020/07/23 14:13:29 by abourdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr (int	nb);
void	ft_putchar(char	a);
void	ft_putstr_non_printable(char	*str);

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			write(1, "\\", 1);
			if (str[i] < 16 && str[i] > 0)
				write(1, "0", 1);
			else
				ft_putnbr(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	const unsigned char base[17] = "0123456789abcdef";

	if (nb >= 16)
	{
		ft_putnbr(nb / 16);
		ft_putchar(base[nb % 16]);
	}
	else
	{
		ft_putchar(base[nb % 16]);
	}
}

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int main()
{
	char str[] = "Coucou\ntu vas bien?";

	ft_putstr_non_printable(str);
}
