/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:59:56 by  amangold         #+#    #+#             */
/*   Updated: 2022/11/22 16:34:58 by  amangold        ###   ########.fr       */
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

	str = (char *) malloc (sizeof(char) * n +1);
	if (str == NULL)
		return (str);
}	

char	**ft_split(char const *s, char c)
{
	int	i;
	char	*str;

	*str = (char *) malloc(sizeof(char) * () + 1 );
	while ()
}
