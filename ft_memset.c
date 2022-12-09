/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:31:52 by  amangold         #+#    #+#             */
/*   Updated: 2022/12/06 08:07:30 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*buf;

	i = 0;
	buf = (unsigned char *)b;
	while (i < len)
	{
		buf[i] = c;
		i++;
	}
	return (b);
}

// int main()
// {
//     i = "Hello World";
//     char b[11];
//     memset(b, '*',sizeof(char) * 4);
//     for (int i = 0; i < 10, i++);
//      printf("%c", b[i]);
//     printf("\n");
//     return 0;
// }