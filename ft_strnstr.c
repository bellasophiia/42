/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:48:59 by  amangold         #+#    #+#             */
/*   Updated: 2022/10/25 16:52:03 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <libft.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	size_t	needle_len;
	
	needle_len = strlen (needle, len);
	if (0 == (needle_len = strlen (needle, len)))
		return ((char *)haystack);
	{
		while (*haystack != '\0')
		{
			if (*haystack == needle_len)
				return ((char *)haystack);
		}
	haystack++;
	}
}
