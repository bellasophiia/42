/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:24:55 by  amangold         #+#    #+#             */
/*   Updated: 2022/11/24 13:35:17 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h> 
#include "libft.h"

void	*ft_memcpy(void *dst, const void * src, size_t n)
{
	size_t	i;

	i = 0;
	if (!src && !dst)
		return (NULL);
	while (i < n)
	{
		*dst[i] = *src[i];
		dst++;
		src++;
		n--;
	}
	return (dst);
}
