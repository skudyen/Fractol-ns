/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <nsuwaphr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:34:33 by nsuwaphr          #+#    #+#             */
/*   Updated: 2024/09/09 23:21:52 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastnode;

	if (lst == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	lastnode = ft_lstlast(*lst);
	lastnode -> next = new;
}

// #include <stdio.h>

// int main()
// {
// 	t_list	*lst;

// 	lst = NULL;
// 	ft_lstadd_back(&lst, ft_lstnew("asd"));
// 	ft_lstadd_back(&lst, ft_lstnew("auihdg8syg980sey98gse9p8sh98st89pgsd"));
// 	printf("%d\n", ft_lstsize(lst));
// 	t_list *lastnode = ft_lstlast(lst);
// 	printf("%s", (char *)lastnode -> content);

// }
