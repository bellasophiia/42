/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:12:13 by  amangold         #+#    #+#             */
/*   Updated: 2022/10/25 14:05:33 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <libft.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	const char		*ptr_src;
	char			*ptr_dst;
	const char		dest_length;
	char			src_length;

	src_length = ft_strlen(src);
	dest_length = ft_strlen(dest);
	*ptr_src = dest_length;
	*ptr_dst = 0;
	if (dest_length < size - 1 && size > 0)
	{
		while (src[*ptr_src] && dest_length + *ptr_src < size - 1)
		{
			dst[*ptr_dst] = src[*ptr_src];
			*ptr_dst++;
			*ptr_src++;
		}
	}
}
