/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpsplit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 16:02:29 by  amangold         #+#    #+#             */
/*   Updated: 2022/12/13 16:25:07 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**str;

	i = 0;
	k = 0;
	str = ((char **) malloc(sizeof(char *) * ft_counter(s, c)) + 1);
	if (!s || !(str))
		return (NULL);
	while (s[i])
	{	
		while ((s[i] == c) && (s[i] != '\0'))
			i++;
		j = i;
		while (s[i] && s[i] != c)
		i++;
		if (i > j)
		{
	str[--k] = ft_strndup(s + j, i - j);
	k++;
		}
	}
	str[k] = NULL;
	return (str);
}









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

static unsigned int	word_lenght(char const *s, unsigned int i, char c)
{
	int    word;

	word = 0;
	while (s[i + word] != '\0' && s[i + word] != c)
		word++;
	return (word);
}

static unsigned int	word_counter(char const *s, char c)
{
	unsigned int    counter;
	unsigned int    i;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			counter++;
		while (s[i] != c && s[i] != '\0')
			i++;
		return (counter);
	}

void	word_writer(char const *s, unsigned int i, char *ptr, char c)
{
	unsigned int	j;
	j = 0;
	while (j < word_lenght(s, i, c))
	{
		ptr[j] = s[i + j];
		j++;
	}
	ptr[j] = '\0';
}
void	*memory_free(char **ptr, unsigned int i)
{
	unsigned int	j;

	j = 0;
	while (j < i)
	{
		free(ptr[j]);
		j++;
	}
	free(ptr);
	return (NULL);
}
char	**ft_split(char const *s, char c)
{
	unsigned int    i;
	unsigned int    j;
	char            **ptr;

	if (!s)
		return (NULL);
	ptr = (char **)malloc((word_counter(s, c) + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	i = 0;
	j = 0;
	while (i < word_counter(s, c))
	{
		while (s[j] == c)
			j++;
		ptr[i] = (char *)malloc((word_lenght(s, j, c) + 1) * sizeof(char));
		if (!ptr[i])
			return (memory_free(ptr, i));
		word_writer(s, j, ptr[i], c);
		j += word_lenght(s, j, c);
		i++;
	}
	ptr[i] = NULL;
	return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:59:56 by  amangold         #+#    #+#             */
/*   Updated: 2022/12/13 13:35:46 by  amangold        ###   ########.fr       */
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

static int	ft_word_len(char const *s, char c)
{
	int	length;

	length = 0;
	while (s[length] != '\0' && s[length] != c)
	{
		length++;
	}
	return (length);
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
		w_len = ft_word_len(s, c);
		printf("allocating memory for length: %d\n", w_len);
		str[i] = (char *)malloc((w_len + 1) * sizeof(char));
		if (!str[i])
		{
			free_all(str, i);
			return (NULL);
		}
	}
	str = ft_word_writer(str, s, c);
	return (str);
}


int main(void){
	char *s = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
	char **ret = ft_split(s, ' ');
	int i = 0;
	while (i < 14)
	{
		printf("Word number %d: %s \n",i , ret[i]);
		i++;
	}
}