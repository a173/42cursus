/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaryn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 15:54:22 by acaryn            #+#    #+#             */
/*   Updated: 2020/11/02 22:21:43 by acaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int	i;
	int	n;

	i = -1;
	n = ft_strlen(str);
	while (n >= ++i)
		if (str[i] == ch)
			return ((char*)(str) + i);
	return (NULL);
}
