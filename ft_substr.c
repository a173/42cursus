/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaryn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:50:24 by acaryn            #+#    #+#             */
/*   Updated: 2020/11/02 22:23:38 by acaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	n;
	unsigned int	l;
	char			*new;

	l = (unsigned int)len;
	i = 0;
	if (!s || (n = ft_strlen(s)) <= start)
		return (new = ft_calloc(1, 1));
	if (l > 0)
		n = start + l;
	else
		n = n + l;
	if ((new = ft_calloc(n - start + 1, 1)) != NULL)
	{
		while (len > i)
		{
			new[i] = s[i + start];
			i++;
		}
	}
	return (new);
}
