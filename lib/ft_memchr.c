/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 02:06:50 by nsuwaphr          #+#    #+#             */
/*   Updated: 2024/09/09 22:34:48 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*tmp;
	size_t	i;

	i = 0;
	tmp = (char *)s;
	while (i < n)
	{
		if (tmp[i] == (char)c)
			return (&tmp[i]);
		i++;
	}
	return (NULL);
}
//int main()
//{
//	char a[] = "skibidi";
//	int	c = 'd';
//	size_t	n = 6;
//	char	*p;
//
//	p =  ft_memchr(a, c, n);
//	printf("p = %s\n", p);
// 
//	char x[] = "skibidi";
//	int	y = 'd';
//	size_t	z = 6;
//	char	*s;
//
//	s =  memchr(x, y, z);
//	printf("s = %s\n", s);
//}
