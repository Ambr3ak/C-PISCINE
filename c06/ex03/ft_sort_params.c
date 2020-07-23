/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourdar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 18:24:54 by abourdar          #+#    #+#             */
/*   Updated: 2020/07/16 15:05:36 by abourdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_printstr(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	int			i;
	int			n;
	char		*s;

	i = 0;
	n = -1;
	while (++n < argc - 1)
	{
		while (++i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				s = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = s;
			}
		}
		i = 0;
	}
	ft_printstr(argc, argv);
	return (0);
}
