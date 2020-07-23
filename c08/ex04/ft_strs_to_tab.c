/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourdar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 10:56:22 by abourdar          #+#    #+#             */
/*   Updated: 2020/07/21 18:18:24 by abourdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int						ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char					*ft_strdup(char *src)
{
	char	*dest;
	int		size;
	int		i;

	i = 0;
	size = 0;
	size = ft_strlen(src);
	if (!(dest = malloc((size + 1) * sizeof(char))))
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*s_tab;
	int				i;

	i = 0;
	if (!(s_tab = malloc(sizeof(t_stock_str) * (ac + 1))))
		return (0);
	while (av[i] && i < ac)
	{
		s_tab[i].size = ft_strlen(av[i]);
		s_tab[i].str = av[i];
		s_tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	s_tab[i].size = 0;
	s_tab[i].str = 0;
	s_tab[i].copy = 0;
	return (s_tab);
}
