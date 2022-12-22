/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:48:59 by  amangold         #+#    #+#             */
/*   Updated: 2022/12/16 14:25:53 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	haycount;
	size_t	needlecount;
	size_t	nlen;

	haycount = 0;
	nlen = 0;
	while (needle[nlen])
			nlen++;
	if (!nlen)
		return ((char *)haystack);
	if (!len)
		return (0);
	while (haystack[haycount] && nlen + haycount <= len)
	{
		needlecount = 0;
		while (haystack[haycount + needlecount] == needle[needlecount]
			&& needlecount < nlen)
		{
			if (++needlecount == nlen)
				return ((char *)&haystack[haycount]);
		}
		haycount++;
	}
	return (0);
}
