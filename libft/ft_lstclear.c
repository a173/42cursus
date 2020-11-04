/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaryn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:13:57 by acaryn            #+#    #+#             */
/*   Updated: 2020/11/02 22:17:37 by acaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *temp;
	t_list *buf;

	if (lst && del)
	{
		buf = *lst;
		while (buf)
		{
			temp = buf->next;
			del(buf->content);
			free(buf);
			buf = temp;
		}
		*lst = NULL;
	}
}
