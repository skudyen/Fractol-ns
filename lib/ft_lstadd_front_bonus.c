/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <nsuwaphr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 02:47:37 by nsuwaphr          #+#    #+#             */
/*   Updated: 2025/05/06 16:54:51 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new -> next = *lst;
		*lst = new;
	}
}
// #include <stdio.h>
// int main(){
// 	t_list	*n1;
// 	t_list	*n2;
// 	t_list	*lst;

// 	n1 = ft_lstnew("abcd");
// 	n2 = ft_lstnew("1234");
// 	lst = n1;
// 	ft_lstadd_front(&lst, n2);
// 	while ((lst))
// 	{
// 		printf("%s\n", ((*lst).content));
// 		lst = lst->next;
// 	}
// 	free(n1);
// 	free(n2);
// }