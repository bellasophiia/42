/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:59:56 by  amangold         #+#    #+#             */
/*   Updated: 2022/12/15 20:35:03 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	ft_wrdcnt(char const *s, char c)
{
	size_t	i;
	int		num;

	i = 0;
	num = 0;
	while (s[i] != '\0')
	{
		while ((s[i] == c))
			i++;
		if (s[i] != c && s[i] != '\0')
			num++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (num);
}

static char	**free_split(char **res)
{
	int	i;

	i = 0;
	while (res[i] != NULL)
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (NULL);
}

static char	**ft_split_words(char	**words, char const *s, char c)
{
	size_t	i;
	size_t	k;
	int		num;

	i = 0;
	k = 0;
	num = 0;
	while (s[i] != '\0')
	{
		while ((s[i] == c))
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			k++;
		}
		if (k > 0)
		{
			words[num] = ft_substr(s, i - k, k);
			if (!words[num++])
				return (free_split(words));
			k = 0;
		}
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	words = ft_calloc(ft_wrdcnt(s, c) + 1, sizeof(char *));
	if (!words)
		return (NULL);
	words = ft_split_words(words, s, c);
	return (words);
}
