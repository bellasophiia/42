/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:05:23 by  amangold         #+#    #+#             */
/*   Updated: 2022/10/25 12:38:58 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h> 
#include <libft.h>

char	ft_strchr(const char *hay, int needle)
{
	while (*hay != '\0')
	{
		if (*hay == needle)
			return ((char *) needle);
			hay++;
	}
}

// int	main()
// {
// 	const char str[] = "GutenTag";
// 	const char = 't';
// 	char	*ret;

// 	ret = strchr(str, ch);

// 	printf("String after" , ch, ret);

// 	return(0); 
// }
