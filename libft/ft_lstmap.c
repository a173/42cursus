/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaryn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:10:04 by acaryn            #+#    #+#             */
/*   Updated: 2020/11/02 22:18:06 by acaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *temp;
	t_list *new;

	temp = NULL;
	new = NULL;
	if (lst && f)
		while (lst)
		{
			if ((new = ft_lstnew(f(lst->content))) != NULL)
			{
				ft_lstadd_back(&temp, new);
				lst = lst->next;
			}
			else
			{
				ft_lstclear(&temp, del);
				return (temp = NULL);
			}
		}
	return (temp);
}
