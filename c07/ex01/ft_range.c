/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourdar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 17:49:24 by abourdar          #+#    #+#             */
/*   Updated: 2020/07/22 13:54:13 by abourdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *tab;

	i = 0;
	if (min >= max)
		return (0);
	if (!(tab = malloc((max - min) * sizeof(int))))
		return (0);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
