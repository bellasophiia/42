/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:19:20 by  amangold         #+#    #+#             */
/*   Updated: 2022/11/29 17:35:46 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strtim(char const *s1, char const *set)
{
	size_t	size_s;
	char	*n;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	while (size_s && ft_strchr(set, s1[size_s]))
	size_s--;
	n = ft_substr((char *)s1, 0, size_s + 1);
	return (n);
}
