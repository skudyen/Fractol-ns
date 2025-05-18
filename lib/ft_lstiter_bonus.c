/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <nsuwaphr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 20:01:31 by nsuwaphr          #+#    #+#             */
/*   Updated: 2025/05/06 16:55:33 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}
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
// 	ft_lstiter(n2, printf);
// }