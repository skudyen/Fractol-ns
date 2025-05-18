/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuwaphr <nsuwaphr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 02:37:19 by nsuwaphr          #+#    #+#             */
/*   Updated: 2025/05/06 16:59:54 by nsuwaphr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	issep(char const *s, char c)
{
	int	sep;

	if (!s)
		return (0);
	sep = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			sep++;
		s++;
	}
	return (sep);
}

static int	len(char const *s, char c)
{
	int	len;

	if (!s)
		return (0);
	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static char	**freesplit(char **str, int nb)
{
	while (nb >= 0)
		free(str[nb--]);
	free(str);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**str;
	int		start;
	int		idx;

	str = (char **)malloc(sizeof(char *) * (issep(s, c) + 1));
	if (!s || !str)
		return (NULL);
	start = 0;
	idx = 0;
	while (s[start])
	{
		if (s[start] != c)
		{
			str[idx] = ft_substr(s, start, len(&s[start], c));
			if (!str[idx])
				return (freesplit(str, idx));
			idx++;
			start += len(&s[start], c);
		}
		else
			start++;
	}
	str[idx] = 0;
	return (str);
}

int main()
{
	char a[] ="Book moon room";
	char **str = ft_split(a, ' ');
	while (*str)
	{
		printf("%s\n", *str++);
	}
}

// #include <stdio.h>
// int	main()
// {
// 	char *s = "ab cd";
// 	char c = ' ';
// 	char **split;

// 	split = ft_split(s, c);
// 	printf("--%s\n",split[0]);
// 	printf("--%s\n",split[1]);
// 	printf("--%s\n",split[2]);
// 	free(split[0]);
// 	free(split[1]);
// 	free(split[2]);
// 	free(split);
// }