/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:16:32 by nsuwaphr          #+#    #+#             */
/*   Updated: 2024/09/09 07:19:00 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!src && !dst)
		return (NULL);
	while (i < n)
	{
		*((unsigned char *)dst + i) = *((unsigned char *)src + i);
		i++;
	}
	return (dst);
}
//int main()
//{
//	char src[] = "abcdefghijklmnopqrstuvwxyz";
//	char dst[27];
//
//	ft_memcpy(dst, src, sizeof(char) * 27);
//	printf("dst : %s\n", dst);
//
//	
//	char e[10];
//	ft_memcpy(e, src + 5, sizeof(char) * 9);
//	printf("e : %s\n", e);
//	
//	
//	memcpy(dst, src, sizeof(char) * 27);
//	printf("dst : %s\n", dst);
//
//	
//	char x[10];
//	memcpy(x, src + 5, sizeof(char) * 9);
//	printf("std x : %s\n", e);
//}
