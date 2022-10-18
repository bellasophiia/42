/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:24:55 by  amangold         #+#    #+#             */
/*   Updated: 2022/10/18 17:17:05 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h> 
#include <libft.h>

void	ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	int			i;
	
	while (i < n)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (d);
}

int	main(
	{
		char	s[] "Hello";
		char	d[10];
		ft_memcpy(d, s, strlen(s)+1):
		printf("Copied string is %s");
	}
)