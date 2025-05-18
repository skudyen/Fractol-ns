/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <nsuwaphr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 23:00:47 by nsuwaphr          #+#    #+#             */
/*   Updated: 2025/05/06 17:00:15 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		i;

	i = -1;
	dest = (char *)malloc(ft_strlen(s) + 1);
	if (!dest)
		return (NULL);
	while (s[++i])
		dest[i] = s[i];
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	const char *s =  "sdfer";
// 	char *dup;

// 	dup = ft_strdup(NULL);
// 	printf("-- %s", dup);
// 	free(dup);
// }