/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <nsuwaphr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 21:29:26 by nsuwaphr          #+#    #+#             */
/*   Updated: 2025/05/06 17:00:39 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	if (size <= dst_len || size == 0)
		return (size + src_len);
	while (src[i] != '\0' && i < size - dst_len -1)
	{
		dst[i + dst_len] = src[i];
		i++;
	}
	dst[i + dst_len] = '\0';
	return (dst_len + src_len);
}

// #include <stdio.h>

// int main(){
// 	char dst[10] = "123456";
// 	char *src = "abcd";

// 	printf("%zu\n",ft_strlcat(dst, src, 20));
// 	printf("%s", dst);
// }