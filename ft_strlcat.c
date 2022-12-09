/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:12:13 by  amangold         #+#    #+#             */
/*   Updated: 2022/12/05 15:11:49 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ps;
	size_t	pd;
	size_t	slen;
	size_t	dstlen;

	slen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	pd = dstlen;
	ps = 0;
	if (dstlen < dstsize - 1 && dstsize > 0)
	{
		while (src[ps] && dstlen + ps < dstsize - 1)
		{
			dst[pd] = src[ps];
			pd++;
			ps++;
		}
		dst[pd] = '\0';
	}
	if (dstsize < dstlen)
		dstlen = dstsize;
	return (dstlen + slen);
}
