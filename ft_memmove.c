/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:42:33 by  amangold         #+#    #+#             */
/*   Updated: 2022/12/02 17:09:12 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = (char *) dest;
	s = (char *) src;
	i = 0;
	if (dest < src)
	{
		while (i < len)
		{
		d[i] = s[i];
		i++;
		}
		if (d > s)
		{
			len--;
		d[len - 1] = s[len - 1];
		}
	}
	return (dest);
}
