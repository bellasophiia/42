/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:04:38 by  amangold         #+#    #+#             */
/*   Updated: 2022/11/15 12:57:02 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <libft.h>

char *ft_strdup(const char *s1)
{
	int		s1_size;
	char	*duplicate;
	char	*dup_free;

	s1_size = strlen(org);
	duplicate = (char *) malloc (sizeof (char) *s1_size + 1);
	if (duplicate == NULL)
		return ((char *) NULL);
	dup_free = duplicate;
	while (*s1_size)
	{
		*dup_free = *s1;
		dup_free++;
		s1++;
	}
	*dup_free = '\0';
	return (duplicate);
}
