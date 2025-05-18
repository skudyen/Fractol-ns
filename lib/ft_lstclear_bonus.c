/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <nsuwaphr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:49:27 by nsuwaphr          #+#    #+#             */
/*   Updated: 2025/05/06 16:55:12 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*tmp;

	if (!lst || !del)
		return ;
	node = *lst;
	while (node != NULL)
	{
		tmp = node;
		node = node -> next;
		ft_lstdelone(tmp, del);
	}
	*lst = NULL;
}
// void	free_func(char *str)
// {
// 	free(str);
// }
// #include <stdio.h>
// int main(){
// 	t_list	*n1;
// 	t_list	*n2;
// 	char	*str1;
// 	char	*str2;

// 	str1 = (char *)malloc(3 * sizeof(char));
// 	str1[0] = 'a';
// 	str1[1] = 'b';
// 	str1[2] = '\0';
// 	n1 = ft_lstnew(str1);
// 	str2 = (char *)malloc(3 * sizeof(char));
// 	str2[0] = 'c';
// 	str2[1] = 'd';
// 	str2[2] = '\0';
// 	n2 = ft_lstnew(str2);
// 	n2->next = n1;
// 	ft_lstclear(&n2, free_func);
// }