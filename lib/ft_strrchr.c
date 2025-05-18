/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 00:49:10 by nsuwaphr          #+#    #+#             */
/*   Updated: 2024/09/17 16:48:01 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	int		size;

	tmp = NULL;
	size = 0;
	while (*(s + size))
	{
		if (*(s + size) == (char)c)
			tmp = (char *) &*(s + size);
		size++;
	}
	if (*(s + size) == (char)c)
		tmp = (char *) &*(s + size);
	return (tmp);
}
//int	main()
//{
//	char str[] = "You cant see me";
//
//	char *space = ft_strrchr(str, ' ');
//	printf("%s\n", space);	
//
//	char std[] = "You cant see me";
//
//	char *spacestd = strrchr(std, ' ');
//	printf("%s\n", spacestd);
//
//}
