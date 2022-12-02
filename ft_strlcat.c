/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:12:13 by  amangold         #+#    #+#             */
/*   Updated: 2022/12/01 13:43:49 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int			ps;
	int			pd;
	size_t		dest_length;
	size_t		src_length;

	src_length = ft_strlen(src);
	dest_length = ft_strlen(dst);
	ps = dest_length;
	pd = 0;
	if (dest_length < dstsize - 1 && dstsize > 0)
	{
		while (src[ps] && dest_length + ps < dstsize - 1)
		{
			dst[pd] = src[ps];
			pd++;
			ps++;
		}
		dst[pd] = '\0';
	}
	return (dest_length + src_length);
}
