/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:07:42 by  amangold         #+#    #+#             */
/*   Updated: 2022/12/09 11:25:50 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

static int	ft_intlen(int n)
{
	size_t	intlen;

	intlen = 0;
	if (n == 0)
		intlen++;
	if (n < 0)
		intlen++;
	while (n)
	{
		n = n / 10;
		intlen++;
	}
	return (intlen);
}

char	*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	i;

	len = ft_intlen(n);
	str = (char *) malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	str[len--] = '\0';
	i = n;
	if (i == 0)
		str[0] = i + '0';
	while (i != 0)
	{
		str[len] = (i % 10) + '0';
		i = i / 10;
		len--;
	}
	return (str);
}
