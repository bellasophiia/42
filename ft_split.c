/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:59:56 by  amangold         #+#    #+#             */
/*   Updated: 2022/11/29 19:24:00 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

//static int	ft_counter(char const *s, char c)
//{
//	unsigned int	i;
//	unsigned int	j;
//	size_t			len;
//	int				counter;
//
//	i = 0;
//	j = 0;
//	len = ft_strlen(s);
//	counter = 0;
//	while (s[i])
//	{
//		while (s[i] == c)
//			i++;
//		if (s[i] != '\0')
//			counter++;
//		while (s[i] && s[i] != c)
//			j++;
//	}
//	return (counter);
//}
//
////char	*ft_strndup(const char *s, size_t n)
////{
////	char	*str;
////	int		i;
////
////	str = (char *) malloc (sizeof(char) * n +1);
////	if (str == NULL)
////		return (NULL);
////	i = 0;
////	while (s)
////	{
////	str[n] = s;
////	n++;
////	s++;
////	}
////	str[n] = '\0';
////	return (str);
////}
//static void	*free_all(char **all, int start, int stop)
//{
//	while (start <= stop)
//		free(all[start++]);
//	free(all);
//	return (0);
//}
//
//char	**ft_split(char const *s, char c)
//{
//	int		i;
//	int		j;
//	int		k;
//	char	**str;
//
//	i = 0;
//	j = 0;
//	k = 0;
//	if (!s)
//		return (0);
//	str = (char **)malloc (sizeof (ft_counter(*s, c) + 1));
//	if (!s || !(str))
//		return (NULL);
//	str[k] = 0;
//	while (i < ft_counter(s, c) && s[j] != '\0')
//	{
//		while (!(s[i -1] != c && (s[i] == c || !s[i])) && i > 0)
//			i--;
//		while (i - j > 0 && s[i - j - 1] != c)
//			j++;
//		str[k--] = ft_substr(s, i - j, j);
//		if (!str)
//			return (free_all(str, k, ft_counter(s, c)));
//		i -= j;
//	}
//	return (str);
//}
//

static int	countwords(char const *s, char c, int *i)
{
	int	count;

	count = 0;
	*i = 0;
	while (s[*i])
	{
		if (s[*i] != c && (s[*i + 1] == c || !s[*i + 1]))
			count++;
		(*i)++;
	}
	return (count);
}

static void	*free_all(char **arr, int start, int stop)
{
	while (start <= stop)
		free(arr[start++]);
	free(arr);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		len;
	int		count;
	char	**out;

	if (!s)
		return (0);
	count = countwords(s, c, &i);
	out = (char **)malloc((count + 1) * sizeof(char *));
	if (!out)
		return (0);
	out[count] = 0;
	while (count > 0)
	{
		len = 0;
		while (!(s[i - 1] != c && (s[i] == c || !s[i])) && i > 0)
			i--;
		while (i - len > 0 && s[i - len - 1] != c)
			len++;
		out[--count] = ft_substr(s, i - len, len);
		if (!out)
			return (free_all(out, count, countwords(s, c, &i)));
		i -= len;
	}
	return (out);
}