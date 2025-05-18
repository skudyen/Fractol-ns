/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 02:36:13 by nsuwaphr          #+#    #+#             */
/*   Updated: 2024/09/08 22:40:33 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	int	l;
	int	r;

	l = 0;
	r = ft_strlen(s1) - 1;
	while (s1[l] && ft_strchr(set, s1[l]))
		l++;
	while (s1[l] && ft_strchr(set, s1[r]))
		r--;
	return (ft_substr(s1, l, r - l + 1));
}
