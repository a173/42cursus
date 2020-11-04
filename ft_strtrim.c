/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaryn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 17:40:36 by acaryn            #+#    #+#             */
/*   Updated: 2020/11/04 19:16:35 by acaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_finder_set(char *s1, char *set, int z)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (z == -1)
		i = ft_strlen(s1) - 1;
	while (s1[i] && set[j])
	{
		if (set[j] == s1[i])
		{
			i += z;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		n;
	int		o;
	char	*buf;

	o = -1;
	if (!s1)
		return (buf = ft_calloc(1, 1));
	if (!set)
		return (buf = ft_strdup(s1));
	i = ft_finder_set((char*)s1, (char*)set, 1);
	n = ft_finder_set((char*)s1, (char*)set, -1);
	if (!s1[i])
		return (buf = ft_calloc(1, 1));
	if ((buf = ft_calloc(n - i + 2, 1)) != NULL)
		while (++o <= n - i)
			buf[o] = s1[i + o];
	return (buf);
}
