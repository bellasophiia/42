/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:59:56 by  amangold         #+#    #+#             */
/*   Updated: 2022/11/29 17:51:28 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_counter(char const *s, char c)
{
	unsigned int	i;
	size_t			len;
	char			counter;

	i = 0;
	len = ft_srtlen(s);
	counter = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		counter++;
		while (s[i] && s[i] != c)
		j++;
	}
	return (counter);
}

//char	*ft_strndup(const char *s, size_t n)
//{
//	char	*str;
//	int		i;
//
//	str = (char *) malloc (sizeof(char) * n +1);
//	if (str == NULL)
//		return (NULL);
//	i = 0;
//	while (s)
//	{
//	str[n] = s;
//	n++;
//	s++;
//	}
//	str[n] = '\0';
//	return (str);
//}
static void	*free_all(char **all, int start, int stop)
{
	while (start <= stop)
		free(all[start++]);
	free(all);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	str = malloc (sizeof(char *) ft_counter(*s, c) + 1);
	if (!s || !(str))
		return (NULL);
	while (i < ft_counter(s, c) && s[j] != '\0')
	{
		while (!(s[i -1] != c && (s[i] == c || !s[i])) && i > 0)
			i--;
		while (i - j > 0 && s[i - j - 1] != c)
			j++;
		str[k--] = ft_substr(s, i - j, j);
		if (!str)
			return (free_all(str, k, ft_counter(s, c, &i)));
		i -= j;
	}
	return (str);
}
