/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:44:21 by nsuwaphr          #+#    #+#             */
/*   Updated: 2024/10/24 22:49:13 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_c(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_print_str(char *s)
{
	int	cnt;

	cnt = 0;
	while (!s)
	{
		ft_print_str("(null)");
		return (6);
	}
	while (s[cnt])
	{
		ft_print_c(s[cnt]);
		cnt++;
	}
	return (cnt);
}

// #include <stdio.h>
// int main()
// {
//     char A[] = "Oasis";
//     char *null_ptr = NULL;

//     printf("%d\n", ft_print_str(A)); 
//     printf("%d\n", ft_print_str(null_ptr)); 
// }
