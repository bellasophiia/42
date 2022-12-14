/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:59:56 by  amangold         #+#    #+#             */
/*   Updated: 2022/12/13 14:37:51 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

#include <stdio.h>

static int	ft_counter(char const *s, char c)
{
	size_t	i;
	int		counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			counter++;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (s[i] == c)
			i++;
	}
	return (counter);
}

static int	ft_word_len(char const *s, char c, int wn)
{
	int	length;
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0' && counter < wn)
	{
		if (s[i] != c)
			counter++;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (s[i] == c)
			i++;
	}
	while (s[i] == c)
		i++;
	// printf("%c\n", s[i]);
	length = i;
	while (s[length] != '\0' && s[length] != c)
	{
		length++;
	}
	return (length - i);
}

static char	**ft_word_writer(char **str, char const *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			k = 0;
			while (s[i] != c && s[i] != '\0')
			{
				str[j][k] = s[i];
				i++;
				k++;
			}
		// printf("word: %s\n", str[j]);
			str[j][k] = '\0';
			j++;
		}
		if (s[i] == c)
			i++;
	}
	return (str);
}

static void	free_all(char **str, int i)
{
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		w_len;
	int		i;

	if (!s)
		return (NULL);
	str = (char **) malloc(sizeof(char *) * (ft_counter(s, c) + 1));
	if (!str)
		return (NULL);
	i = -1;
	while (++i < ft_counter(s, c))
	{
		w_len = ft_word_len(s, c, i);
		// printf("allocating memory for length: %d\n", w_len);
		str[i] = (char *)malloc((w_len + 1) * sizeof(char));
		if (!str[i])
		{
			free_all(str, i);
			return (NULL);
		}
	}
	str = ft_word_writer(str, s, c);
	// str[ft_counter(s,c) + 1] = 0;
	return (str);
}


// int main(void){
// 	char *s = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
// 	char **ret = ft_split(s, ' ');
// 	int i = 0;
// 	while (ret[i] != NULL)
// 	{
// 		printf("Word number %d: %s \n",i , ret[i]);
// 		i++;
// 	}
// }