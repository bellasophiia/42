/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:21:40 by  amangold         #+#    #+#             */
/*   Updated: 2022/10/25 13:07:17 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <libft.h>

char	*ft_substr(char const *src, unsigned int start, size_t len)
{
	int		i;
	int		strlen;
	char	*dest;

		strlen = len - start;
		*dest = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while (i < len && (*(src + i) != '\0'))
	{
		*dest = *(src + i);
		i++;
		dest++;
	}
	*dest = '\0';
	return (dest - len);
}
