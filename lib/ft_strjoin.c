/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 02:11:52 by nsuwaphr          #+#    #+#             */
/*   Updated: 2024/09/08 22:20:00 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*tmp;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	tmp = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!tmp)
		return (NULL);
	i = 0;
	while (*s1 || *s2)
	{
		if (*s1)
			(tmp)[i++] = *s1++;
		else
			(tmp)[i++] = *s2++;
	}
	tmp[i] = '\0';
	return (tmp);
}
