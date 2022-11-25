/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:07:42 by  amangold         #+#    #+#             */
/*   Updated: 2022/11/25 12:33:17 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <libft.h>

//int	ft_counter(char const *s, char c)
//{
//	unsigned int	i;
//	char			counter;
//
//	i = 0;
//	counter = 0;
//	while (s[i])
//	{
//		while (s[i] == c)
//		i++;
//		if (s[i] != '\0')
//		counter++;
//		while (s[i] && s[i] != c)
//		i++;
//	}
//	return (counter);
//}

void	ft_reversec(char s[])
{
	int	c;
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(s)-1;
	c = s[i];

	while (i < j)
	{
		i++;
		j--;
	}
	s[i] = s[j];
	s[j] = c;
}

int	ft_negative(int n)
{
	int	i;

	if (n < 0)
	{
		n = '-';
		n++;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	

	if(!(str = (char *) malloc(sizeof(char) ft_strlen(n) +1);
		return (NULL);
	if (n == -2147483648)
		return (ft_strlcpy(str, "-2147483648"));
	if (n < 0)
	{
		ft_negative(n)
	}
	while ((n /= 10) > 0)
	{
		n % 10 + '/0';
		n++;
	}
	ft_reversec(str[])
}
