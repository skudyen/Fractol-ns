/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <nsuwaphr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 22:29:30 by nsuwaphr          #+#    #+#             */
/*   Updated: 2024/09/09 22:50:09 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;
	size_t	nb;

	nb = count * size;
	if ((long)count == 0 || (long)size == 0)
		nb = 1;
	else if ((long)count < 0 || (long)size < 0 || count * size > __INT_MAX__)
		return (NULL);
	tmp = malloc(nb);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, nb);
	return (tmp);
}

// int main()
// {
// 	ft_calloc(__INT_MAX__ - 2, 2);
// 	return 0;
// }
