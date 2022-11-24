/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:12:13 by  amangold         #+#    #+#             */
/*   Updated: 2022/11/24 09:53:53 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <libft.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	const char		*ps;
	char			*pd;
	const char		dest_length;
	char			src_length;

	src_length = ft_strlen(src);
	dest_length = ft_strlen(dst);
	*ps = dest_length;
	*pd = 0;
	if (dest_length < dstsize - 1 && dstsize > 0)
	{
		while (src[*ps] && dest_length + *ps < dstsize - 1)
		{
			dst[*pd] = src[*ps];
			*pd++;
			*ps++;
		}
		dst[*pd] = '\0';
		return (ft_strlen(dst) + ft_strlen(&src[pd]));
	}
}
