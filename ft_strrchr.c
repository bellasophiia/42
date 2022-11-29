/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:17:44 by  amangold         #+#    #+#             */
/*   Updated: 2022/11/29 17:35:39 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h> 
#include "libft.h"

char	*ft_strrchr(const char *hay, int needle)
{
	const char	*last;

	last = NULL;
	while (*hay)
	{
		if (*hay == (char)needle)
				last = hay;
			hay++;
	}
	if ((char)needle == '\0')
				last = hay;
	return ((char *)last);
}
