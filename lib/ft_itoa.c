/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <nsuwaphr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 02:38:16 by nsuwaphr          #+#    #+#             */
/*   Updated: 2025/05/06 17:02:12 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlen(int n)
{
	int	cnt;

	cnt = 0;
	if (n <= 0)
		cnt++;
	while (n)
	{
		n /= 10;
		cnt++;
	}
	return (cnt);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;
	long	nb;

	nb = n;
	size = numlen(nb);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	str[size] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		nb *= -1;
		str[0] = '-';
	}
	while (nb)
	{
		str[--size] = nb % 10 + '0';
		nb /= 10;
	}
	return (str);
}

// #include <stdio.h>
// int	main()
// {
// 	int	n;
// 	char *text;

// 	n = 8124;
// 	text = ft_itoa(n);
// 	printf("%s\n", text);
// 	free(text);
// }
