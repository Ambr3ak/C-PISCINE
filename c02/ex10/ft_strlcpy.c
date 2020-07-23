/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourdar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 12:52:35 by abourdar          #+#    #+#             */
/*   Updated: 2020/07/08 15:41:28 by abourdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int n;

	i = 0;
	n = 0;
	while (src[n] != 0)
		n++;
	if (size == 0)
		return (n);
	while ((i < n) && (i < size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (n);
}
