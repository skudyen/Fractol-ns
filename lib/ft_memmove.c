/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 18:00:40 by nsuwaphr          #+#    #+#             */
/*   Updated: 2024/09/09 07:21:05 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
//int main(void)
//{
//	char a[] = "123456789";
//	
//	char *ptr = &a[0];
//	char *new_ptr = ptr + 2;
//	printf("old %p \n",  ptr);
//	printf("new %p\n", new_ptr);	
//	printf("before move: %s\n", &a[0]);
//	printf("str of dest %s\n", &a[2]);
//	char *s = (char *)ft_memmove(ptr+2, ptr, 5);
//	printf("%s", s);
//}
