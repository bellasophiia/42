/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 19:12:39 by  amangold         #+#    #+#             */
/*   Updated: 2022/11/29 17:33:54 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr1;
	int				i;

	ptr1 = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*ptr1 == (unsigned char) c)
			return ((void *)(s + i));
		ptr1++;
	}
	return (0);
}

// int main(void)
// {
//     char data[] = {'h', '', }
// }