/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:48:59 by  amangold         #+#    #+#             */
/*   Updated: 2022/12/02 14:08:51 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *) haystack;
	if (!haystack && len == 0)
		return (NULL);
	if (0 == (ft_strlen (needle)))
		return (str);
	{
		while (str[i] != '\0' && len >= ft_strlen(needle))
		{
			while (str[i + j] == needle[j] && str[i + j] != '\0')
			{
				j++;
			}
			if (needle[j] == '\0')
				return (str + i);
			i++;
			j = 0;
			len--;	
		}
	}
	return (NULL);
}
