/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <nsuwaphr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 02:40:01 by nsuwaphr          #+#    #+#             */
/*   Updated: 2025/05/06 17:00:25 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// void	iter(unsigned int i, char * s) {
// 	*s += i;
// }
// #include <stdio.h>
// int main()
// {
// 		char s[] = "0000000000";
// 		ft_striteri(s, iter);
// 		printf("%s", s);
// }