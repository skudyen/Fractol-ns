/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <nsuwaphr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:39:52 by nsuwaphr          #+#    #+#             */
/*   Updated: 2025/05/06 16:55:22 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst -> content);
	free(lst);
}
// void	free_func(char *str)
// {
// 	free(str);
// }
// #include <stdio.h>
// int main(){
// 	t_list	*n1;
// 	char	*str;

// 	str = (char *)malloc(3 * sizeof(char));
// 	str[0] = 'a';
// 	str[1] = 'b';
// 	str[2] = '\0';
// 	n1 = ft_lstnew(str);
// 	ft_lstdelone(n1, free_func);
// 	printf("%s---------------", str);
// }