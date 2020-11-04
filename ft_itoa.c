/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaryn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 20:27:40 by acaryn            #+#    #+#             */
/*   Updated: 2020/11/02 22:16:54 by acaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_create_array(unsigned int j, int min, unsigned int new)
{
	char			*buf;
	unsigned int	i;

	i = 0;
	if ((buf = ft_calloc(j + min, 1)) != NULL)
	{
		if (min)
			buf[i] = '-';
		while (i < j - min)
		{
			buf[j - i - 1] = new % 10 + 48;
			new /= 10;
			i++;
		}
	}
	return (buf);
}

char		*ft_itoa(int n)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	new;
	int				min;

	if (n == 0)
		return (ft_strdup("0"));
	j = 0;
	min = 0;
	if (n < 0)
	{
		min = 1;
		new = -(unsigned int)n;
		j++;
	}
	else
		new = (unsigned int)n;
	i = new;
	while (i > 0)
	{
		i /= 10;
		j++;
	}
	return (ft_create_array(j, min, new));
}
