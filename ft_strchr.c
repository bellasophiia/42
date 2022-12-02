/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:05:23 by  amangold         #+#    #+#             */
/*   Updated: 2022/12/01 13:25:01 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h> 
#include "libft.h"

char	*ft_strchr(const char *hay, int needle)
{
	char	*str;
	int		first;

	str = (char *) hay;
	first = 0;
	while (str[first] != '\0' && str[first] != (char) needle)
	{
			first++;
	}
	if (str[first] == (char) needle)
		return (str + first);
	return (NULL);
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
