/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:42:33 by  amangold         #+#    #+#             */
/*   Updated: 2022/11/29 17:34:06 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	ft_memmove(void *dest, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	int			i;

	d = (char *) dest;
	c = (char *) src;
	i = 0;
	while (i < len)
	{
		*d = *s;
		d++;
		s++;
		i++;
	}
	return (d);
}
