/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 01:21:04 by nsuwaphr          #+#    #+#             */
/*   Updated: 2024/09/09 09:13:09 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size && (s1[i] || s2[i]))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
//int main()
//{
//	char a[] = "Hello World";
//	char b[] = "Hello Word";
//
//	printf("%d\n", ft_strncmp(a, b, 10));
//
//
//	char x[] = "Hello World";
//	char y[] = "Hello Word";
//
//	printf("%d\n", strncmp(x, y, 10));
//}
