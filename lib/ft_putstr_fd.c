/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <nsuwaphr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 02:41:13 by nsuwaphr          #+#    #+#             */
/*   Updated: 2024/09/09 23:21:24 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s || (fd < 0))
		return ;
	while (*s)
		write(fd, s++, 1);
}
// #include <stdio.h>

// int main()
// {
// 	ft_putstr_fd(NULL, -1);
// 	return 0;
// }
