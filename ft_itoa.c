/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:07:42 by  amangold         #+#    #+#             */
/*   Updated: 2022/11/22 17:14:07 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
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

int	ft_isnegative(int n)
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
	int	i;

	while ((n /= 10) > 0);
{
		n % 10 + '/0';
		i++;
	}
	
}
