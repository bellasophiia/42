/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:21:40 by  amangold         #+#    #+#             */
/*   Updated: 2022/12/02 15:35:39 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_substr(char const *src, unsigned int start, size_t len)
{
	size_t		i;
	size_t		strlen;
	char		*dest;

		strlen = ft_strlen(src + start);
		dest = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	if (dest == NULL)
		return (NULL);
	while (i < len)
	{
		dest[i] = src[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
