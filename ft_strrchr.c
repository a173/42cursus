/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaryn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 15:54:22 by acaryn            #+#    #+#             */
/*   Updated: 2020/11/02 22:23:19 by acaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int	n;

	n = ft_strlen(str) + 1;
	while (--n >= 0)
		if (str[n] == ch)
			return ((char*)(str) + n);
	return (NULL);
}
