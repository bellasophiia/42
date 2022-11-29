/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:08:28 by  amangold         #+#    #+#             */
/*   Updated: 2022/11/29 17:35:31 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int	strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	{
		if (n == 0)
			return (0);
	}
	while (i < (int) n - 1 && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (*s1 != *s2)
			return (s1[i] - s2[i]);
	i++;
	}
}
