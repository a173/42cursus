/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaryn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 20:20:00 by acaryn            #+#    #+#             */
/*   Updated: 2020/11/02 22:20:45 by acaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int i;
	int n;

	i = -1;
	if (!s || !fd)
		return ;
	n = ft_strlen(s);
	while (++i < n)
		ft_putchar_fd(s[i], fd);
	ft_putchar_fd('\n', fd);
}
