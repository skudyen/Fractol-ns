/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <nsuwaphr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:05:37 by nsuwaphr          #+#    #+#             */
/*   Updated: 2025/05/06 17:02:27 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, 0, n);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
	// unsigned char test[4] = "abcd";
	// unsigned char ft_test[4] = "abcd";
	// bzero(test, 2);
	// ft_bzero(ft_test, 2);
	// printf("%s\n", test + 2);
	// printf("%s\n", ft_test + 2);

	// char *test = NULL;
	// char *ft_test=  NULL;
	// bzero(test, 2);
	// ft_bzero(ft_test, 2);
	// printf("%s\n", test + 2);
	// printf("%s\n", ft_test + 2);
// }