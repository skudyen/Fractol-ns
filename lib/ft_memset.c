/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <nsuwaphr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:03:37 by nsuwaphr          #+#    #+#             */
/*   Updated: 2025/05/06 16:57:55 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *membloc, int c, size_t len)
{
	char	*tmp;

	tmp = (char *)membloc;
	while (len > 0)
	{
		*(tmp++) = (char)c;
		len--;
	}
	return (membloc);
}
//int main()
//{
//	int i = 0;
//
//	char buffer[10];
//	char buffa[10];
//	
//	ft_memset(buffer, 'x', sizeof(char) * 10); 
//	while (i < 10)
//	{
//		printf("%c", buffer[i]);
//		i++;
//	}
//	printf("\n");
//
//	i = 0;
//	memset(buffa, 'x', sizeof(char) * 10); 
//	while (i < 10)
//	{
//		printf("%c", buffa[i]);
//		i++;
//	}
//	printf("\n");
//}
// #include <stdio.h>

// int main()
// {
// 	unsigned char test[4] = "abcd";
// 	printf("%s", ft_memset(&test, 'z', 2));
// }