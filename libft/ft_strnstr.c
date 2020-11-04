/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaryn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 16:43:09 by acaryn            #+#    #+#             */
/*   Updated: 2020/11/02 22:23:12 by acaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t n;

	i = 0;
	if (!haystack && !needle)
		return (NULL);
	if (!(n = ft_strlen(needle)))
		return ((char*)haystack);
	if (len)
		while (haystack[i] && i < len - n + 1)
		{
			if (ft_strncmp(&haystack[i], needle, n) == 0)
				return ((char*)(haystack + i));
			i++;
		}
	return (NULL);
}
