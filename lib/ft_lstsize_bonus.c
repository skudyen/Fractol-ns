/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <nsuwaphr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 18:45:03 by nsuwaphr          #+#    #+#             */
/*   Updated: 2025/05/06 16:56:44 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	cnt;

	cnt = 0;
	while (lst != NULL)
	{
		cnt++;
		lst = lst->next;
	}
	return (cnt);
}
// #include <stdio.h>
// int main(){
// 	t_list	*n1;
// 	t_list	*n2;
// 	t_list	**lst;

// 	n1 = ft_lstnew("abcd");
// 	n2 = ft_lstnew("1234");
// 	lst = &n1;
// 	ft_lstadd_front(lst, n2);
// 	printf("%d", ft_lstsize(NULL));
// }