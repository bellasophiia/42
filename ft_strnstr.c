/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:48:59 by  amangold         #+#    #+#             */
/*   Updated: 2022/12/05 18:21:04 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	haycount;
	size_t	needlecount;
	size_t	alen;

	haycount = 0;
	alen = 0;
	while (needle[alen])
			alen++;
	if (!alen)
		return ((char *)haystack);
	if (!len)
		return (0);
	while (haystack[haycount] && alen + haycount <= len)
	{
		needlecount = 0;
		while (haystack[haycount + needlecount] == needle[needlecount]
			&& needlecount < alen)
		{
			if (++needlecount == alen)
				return ((char *)&haystack[haycount]);
		}
		haycount++;
	}
	return (0);
}
