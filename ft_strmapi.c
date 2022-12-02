/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:41:35 by  amangold         #+#    #+#             */
/*   Updated: 2022/12/01 13:45:01 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	u;
	char			*str;

	if (s == NULL || f == NULL)
		return (NULL);
	u = 0;
	str = (char *) malloc(sizeof(char) * (ft_strlen(s)) + 1);
	while (s[u] != '\0')
	{
		str[u] = f(u, s[u]);
		u++;
	}
	str[u] = '\0';
	return (str);
}
