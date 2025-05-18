/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 00:23:20 by nsuwaphr          #+#    #+#             */
/*   Updated: 2024/09/09 07:55:03 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
//int main()
//{
//	char str[] = "sea otter is so cute";
//
//	char *res = ft_strchr(str, 'o');
//	printf(":) result : %s\n", res);
//	
//	char A[] = "sea otter is so cute";
//
//	char *std = strchr(A, 'o');
//	printf(":( result : %s\n", std);
//}
