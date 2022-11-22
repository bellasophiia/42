/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:26:27 by  amangold         #+#    #+#             */
/*   Updated: 2022/11/15 12:59:00 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <libft.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	char	*new;

	if (s1 != s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	join = malloc(sizeof(char) * (s1_len + s2_len) + 1);
	ft_strlcpy(new, s1, s1_len);
	ft_strlcpy((new + s1_len), s2, (s1_len + s2_len + 1));
	return (new);
}
