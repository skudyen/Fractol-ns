/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <nsuwaphr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 20:09:22 by nsuwaphr          #+#    #+#             */
/*   Updated: 2025/05/06 16:55:54 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst -> content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst -> next;
	}
	return (new_list);
}
// void	freeList(t_list *head) 
// {if (head) freeList((t_list *)head->next); free(head);}
// void	* addOne(void * p) 
// {void * r = malloc(sizeof(int)); *(int*)r = *(int*)p + 1; return (r);}
// #include <stdio.h>
// int	main()
// {
// 	int tab[] = {0, 1, 2, 3};
// 	t_list * l =  ft_lstnew(tab);
// 	for (int i = 1; i < 4; ++i)
// 		ft_lstadd_back(&l, ft_lstnew(tab + i));
// 	t_list * m = ft_lstmap(l, addOne, free);
// 	t_list * tmp = l;
// 	for (int i = 0; i < 4; ++i)
// 	{
// 		printf("%d %d\n", *(int*)tmp->content, i);
// 		tmp = (t_list *)tmp->next;
// 	}
// 	tmp = m;
// 	for (int i = 0; i < 4; ++i)
// 	{
// 		printf("%d %d\n", *(int*)tmp->content, i + 1);
// 		tmp = (t_list *)tmp->next;
// 	}
// 	freeList(l); ft_lstclear(&m, free);
// 	return (0);
// }