/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:21:40 by  amangold         #+#    #+#             */
/*   Updated: 2022/12/05 15:14:25 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_substr(char const *src, unsigned int start, size_t len)
{
	size_t		i;
	size_t		strlen;
	char		*dest;

	if (!src)
		return (NULL);
	if (start >= ft_strlen(src))
		return (ft_strdup(""));
		strlen = ft_strlen(src + start);
	if (strlen < len)
			len = strlen;
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
