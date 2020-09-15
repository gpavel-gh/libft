/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpavel <gpavel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:19:24 by gpavel            #+#    #+#             */
/*   Updated: 2020/07/17 10:57:54 by gpavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*aux;

	if (!lst)
		return (NULL);
	new_list = (t_list *)malloc(sizeof(t_list));
	new_list = ft_lstnew(f(lst->content));
	aux = new_list;
	while (lst->next)
	{
		lst = lst->next;
		if (!(aux->next = ft_lstnew(f(lst->content))))
		{
			del(aux->content);
			return (NULL);
		}
		aux = aux->next;
	}
	return (new_list);
}
