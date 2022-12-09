/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:42:33 by  amangold         #+#    #+#             */
/*   Updated: 2022/12/05 15:58:43 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = dest;
	s = src;
	i = 0;
	if (d < s)
	{
		while (i < len)
		{
		d[i] = s[i];
		i++;
		}
	}
	else if (d > s)
	{
		while (len > 0)
		{
			len--;
		d[len] = s[len];
		}
	}
	return (dest);
}
