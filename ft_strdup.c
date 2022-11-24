/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:04:38 by  amangold         #+#    #+#             */
/*   Updated: 2022/11/24 10:16:24 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <libft.h>

char	*ft_strdup(const char *s1)
{
	char	*duplicate;
	int		i;

	duplicate = (char *) malloc (sizeof (char) * ft_strlen(s1) +1);
	if (duplicate == NULL)
		return ((char *) NULL);
	i = 0;
	while (*s1)
	{
		*duplicate[i] = *s1;
		i++;
		s1++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}
