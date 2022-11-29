/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:07:42 by  amangold         #+#    #+#             */
/*   Updated: 2022/11/29 17:45:18 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

static int	ft_intlen(int n)
{
	int	intlen;

	intlen = 0;
	if (n <= 0)
		intlen++;
	while (n)
	{
		n = n / 10;
			intlen++;
	}
	return (intlen);
}

static int	ft_negative(int n)
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
	size_t	len;
	int		i;
	
	i = n;
	len = 0;
	if(!(str = (char *) malloc(sizeof(char) ft_strlen(n) +1);
		return (NULL);
	if (i < 0)
	{
		ft_negative(n)
	}
	str[len--] = '\0';
	while (( i /= 10) > 0)
	{
		i % 10 + '0';
		i--;
	}
	return (str);
}
