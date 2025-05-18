/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <nsuwaphr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:36:55 by nsuwaphr          #+#    #+#             */
/*   Updated: 2024/10/25 00:01:09 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long nb)
{
	unsigned long	cnt;
	char			c;

	cnt = 0;
	if (nb >= 16)
		cnt += ft_print_hex(nb / 16);
	nb %= 16;
	if (nb < 10)
		c = nb + '0';
	else
		c = nb - 10 + 'a';
	cnt += ft_print_c(c);
	return (cnt);
}

int	ft_print_upperhex(unsigned long nb)
{
	unsigned long	cnt;
	char			c;

	cnt = 0;
	if (nb >= 16)
		cnt += ft_print_upperhex(nb / 16);
	nb %= 16;
	if (nb < 10)
		c = nb + '0';
	else
		c = nb - 10 + 'A';
	cnt += ft_print_c(c);
	return (cnt);
}

int	ft_print_ptr(void *ptr)
{
	int				cnt;
	unsigned long	pointer;

	cnt = 0;
	pointer = (unsigned long)ptr;
	if (ptr == NULL)
	{
		write (1, "(nil)", 5);
		return (5);
	}
	cnt += write(1, "0x", 2);
	cnt += ft_print_hex(pointer);
	return (cnt);
}

//#include <stdio.h>
// int main()
// {
//     unsigned long b = 20000;
//     printf("%d\n", ft_print_hex(b));
//    
//     unsigned long a = 20000;
//     printf("%d\n", ft_print_upperhex(a));

//     int d = 42;
//     void *ptr = &d;

//     ft_print_ptr(ptr);
//     printf ("\n");
// }

// int main()
// {
//     int d = 42;
//     void *ptr = &d;

//     int len = ft_print_ptr(ptr);
//     printf("\nLength of printed pointer: %d\n", len); 
// }
