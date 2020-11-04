/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaryn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 01:15:20 by acaryn            #+#    #+#             */
/*   Updated: 2020/11/02 22:22:47 by acaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	n;
	char			*buf;

	i = 0;
	if (!s)
		return (buf = ft_calloc(1, 1));
	n = ft_strlen(s);
	if ((buf = ft_calloc(n + 1, 1)) != NULL)
		while (i < n)
		{
			buf[i] = f(i, s[i]);
			i++;
		}
	return (buf);
}
