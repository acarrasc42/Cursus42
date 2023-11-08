/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarrasc <acarrasc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:06:28 by acarrasc          #+#    #+#             */
/*   Updated: 2023/10/16 16:07:22 by acarrasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*save;
	void	*p;

	if (!lst || !f || !del)
		return (0);
	p = (f(lst->content));
	new_list = ft_lstnew(p);
	if (!new_list)
		return (del(p), NULL);
	save = new_list;
	lst = lst->next;
	while (lst)
	{
		p = (f(lst->content));
		new_list->next = ft_lstnew(p);
		if (!new_list->next)
		{
			ft_lstclear(&save, del);
			return (del(p), NULL);
		}
		new_list = new_list->next;
		lst = lst->next;
	}
	return (save);
}
