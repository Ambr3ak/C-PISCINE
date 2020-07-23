/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourdar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 11:29:41 by abourdar          #+#    #+#             */
/*   Updated: 2020/07/22 15:00:49 by abourdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		sizer(char **strs, char *sep, int size)
{
	int index;
	int j;

	index = 0;
	j = 0;
	while (index < size)
	{
		j += ft_strlen(strs[index]);
		index++;
	}
	j += (ft_strlen(sep) * (size - 1) + 1);
	return (j);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;

	i = 0;
	while (dest[i])
		i++;
	while (*src)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		index;

	index = 0;
	if (!(dest = malloc(sizeof(char) * sizer(strs, sep, size))))
		return (0);
	dest[0] = '\0';
	if (size == 0)
		return (dest);
	while (strs[index] != '\0')
	{
		ft_strcat(dest, strs[index]);
		if (index == (size - 1))
			return (dest);
		ft_strcat(dest, sep);
		index++;
	}
	return (dest);
}
