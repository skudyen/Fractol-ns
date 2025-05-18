/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <nsuwaphr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 21:39:24 by nsuwaphr          #+#    #+#             */
/*   Updated: 2025/05/06 16:57:12 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (*(str1 + i) == *(str2 + i))
			i++;
		else
			return (*(str1 + i) - *(str2 + i));
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char src[10] = "abcdef";
// 	char *t = src;

// 	printf("%s \n", ft_memcpy(t+2, NULL, 3));
// }