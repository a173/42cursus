/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaryn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 14:35:04 by acaryn            #+#    #+#             */
/*   Updated: 2020/11/03 20:05:08 by acaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countset(char *s, char c, int sum)
{
	int	i;
	int	b;

	i = -1;
	b = 0;
	while (s[++i])
		if (s[i] == c)
			b = 0;
		else if (b == 0)
		{
			sum++;
			b = 1;
		}
	return (sum);
}

static int	ft_sizeword(char *s, char c, int sum)
{
	int	i;

	i = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		sum++;
		i++;
	}
	return (sum);
}

static void	*ft_free(char **buf, int i)
{
	int j;

	j = -1;
	while (++j < i)
		free(buf[j]);
	free(buf);
	return (NULL);
}

char		**ft_split(char const *s, char c)
{
	int		m;
	int		i;
	int		j;
	int		n;
	char	**buf;

	i = -1;
	if (!s)
		return (buf = ft_calloc(1, sizeof(char*)));
	m = ft_countset((char*)s, c, 0);
	if ((buf = ft_calloc(m + 1, sizeof(char*))) != NULL)
		while (++i < m)
		{
			n = ft_sizeword((char*)s, c, 0);
			if ((buf[i] = ft_calloc(n + 1, sizeof(char))) == NULL)
				return (ft_free(buf, i));
			j = -1;
			while (s && *s == c)
				s++;
			while (++j < n)
				buf[i][j] = *s++;
		}
	return (buf);
}
