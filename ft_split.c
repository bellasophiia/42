/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:59:56 by  amangold         #+#    #+#             */
/*   Updated: 2022/11/25 12:25:39 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_counter(char const *s, char c)
{
	unsigned int	i;
	char			counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		while (s[i] == c)
		i++;
		if (s[i] != '\0')
		counter++;
		while (s[i] && s[i] != c)
		i++;
	}
	return (counter);
}

char	*ft_strndup(const char *s, size_t n)
{
	char	*str;
	int		i;

	str = (char *) malloc (sizeof(char) * n +1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s)
	{
	str[n] = s;
	n++;
	s++;
	}
	str[n] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	*str = (char *) malloc (sizeof(char) * ft_counter(*s, c) +1);
	while (i < ft_counter(s, c) && s[j] != '\0')
	{
		while (s[j] == c)
			j++;
		while (s[j] != '\0' && s[j] != c)
			j++;
	}
	
}
