/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <nsuwaphr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:23:16 by nsuwaphr          #+#    #+#             */
/*   Updated: 2025/05/06 16:55:40 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}
// #include <stdio.h>
// int main(){
// 	t_list	*n1;
// 	t_list	*n2;

// 	n1 = ft_lstnew("abcd");
// 	n2 = ft_lstnew("1234");
// 	n2->next = n1;

// 	printf("%s\n",n2->next->content);
// 	printf("%s\n",ft_lstlast(n2)->content);
// 	free(n1);
// 	free(n2);
// }