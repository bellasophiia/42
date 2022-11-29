/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:36:22 by  amangold         #+#    #+#             */
/*   Updated: 2022/11/28 17:33:27 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h" 

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	const char		*ptr_src;
	char			*ptr_dest;
	unsigned int	i;

	ptr_src = (char *)src;
	ptr_dest = (char *)dest;
	i = 0;
	while (i < destsize - 1)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	ptr_dest[i + 1] = '\0';
	return (i);
}
