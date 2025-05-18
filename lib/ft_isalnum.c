/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <nsuwaphr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:26:11 by nsuwaphr          #+#    #+#             */
/*   Updated: 2025/05/06 17:02:51 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d\n",ft_isalnum('a'));
// 	printf("%d\n",ft_isalnum('6'));
// 	printf("%d\n",ft_isalnum('-'));
// }