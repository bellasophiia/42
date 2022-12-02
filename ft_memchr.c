/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 19:12:39 by  amangold         #+#    #+#             */
/*   Updated: 2022/12/02 17:30:46 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr1;
	size_t			i;

	ptr1 = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] == (unsigned char) c)
			return ((void *)ptr1);
		ptr1++;
		n--;
	}
	return (NULL);
}

// int main(void)
// {
//     char data[] = {'h', '', }
// }