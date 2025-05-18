/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <nsuwaphr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 19:29:49 by nsuwaphr          #+#    #+#             */
/*   Updated: 2024/10/28 18:10:40 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checkformat(va_list ap, const char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_print_c((char)va_arg(ap, int));
	else if (c == 's')
		len += ft_print_str(va_arg(ap, char *));
	else if (c == 'd' || c == 'i')
		len += ft_print_int(va_arg(ap, int));
	else if (c == 'u')
		len += ft_print_unsigned_int(va_arg(ap, unsigned int));
	else if (c == 'x')
		len += ft_print_hex(va_arg(ap, unsigned int));
	else if (c == 'X')
		len += ft_print_upperhex(va_arg(ap, unsigned int));
	else if (c == 'p')
		len += ft_print_ptr(va_arg(ap, void *));
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int			cnt;
	va_list		ap;

	va_start(ap, str);
	cnt = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == '%')
				cnt += write(1, "%", 1);
			else if (*str == 'c' || *str == 's' || *str == 'd' || *str == 'i'
				|| *str == 'u' || *str == 'x' || *str == 'X' || *str == 'p')
				cnt += ft_checkformat(ap, *str);
			else
				break ;
		}
		else
			cnt += ft_print_c(*str);
		str++;
	}
	va_end(ap);
	return (cnt);
}

// #include "ft_printf.h"
// #include <stdio.h>
// int main() {
//     char *s = NULL;
//     printf("ft_printf -> Buffer : %d\n", ft_printf("%s asdasdas", s));
//     printf("printf -> Buffer : %d\n", printf("%s asdasdas", s));
//     printf("-----------------------------------\n");
//     printf("ft_printf -> Buffer : %d\n", ft_printf("He%clo", 'l'));
//     printf("printf -> Buffer : %d\n", printf("He%clo", 'l'));
//     printf("-----------------------------------\n");
//     printf("ft_printf -> Buffer : %d\n", ft_printf("%s", "Hello"));
//     printf("printf -> Buffer : %d\n", printf("%s", "Hello"));
//     printf("-----------------------------------\n");
//     printf("ft_printf -> Buffer : %d\n", ft_printf("%d", 241124));
//     printf("printf -> Buffer : %d\n", printf("%d", 241124));
//     printf("-----------------------------------\n");
//     printf("ft_printf -> Buffer : %d\n", ft_printf("%u", 2431124));
//     printf("printf -> Buffer : %d\n", printf("%u", 2431124));
//     printf("-----------------------------------\n");
//     printf("ft_printf -> Buffer : %d\n", ft_printf("%x", 255));
//     printf("printf -> Buffer : %d\n", printf("%x", 255));
//     printf("-----------------------------------\n");
//     printf("ft_printf -> Buffer : %d\n", ft_printf("%X", 255));
//     printf("printf -> Buffer : %d\n", printf("%X", 255));
//     printf("-----------------------------------\n");
//     int num = 42;
//     void *ptr = &num;
//     printf("ft_printf -> Buffer : %d\n", ft_printf("%p", ptr));
//     printf("printf -> Buffer : %d\n", printf("%p", ptr));
//     printf("-----------------------------------\n");
//     void *null_ptr = NULL;
//     printf("ft_printf -> Buffer : %d\n", ft_printf("%p", null_ptr));
//     printf("printf -> Buffer : %d\n", printf("%p", null_ptr));
//     printf("-----------------------------------\n");
//     printf("ft_printf -> Buffer : %d\n", ft_printf("Percent sign: %%\n"));
//     printf("printf -> Buffer : %d\n", printf("Percent sign: %%\n"));
//     printf("-----------------------------------\n");
// }
