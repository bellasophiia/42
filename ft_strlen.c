/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:34:51 by  amangold         #+#    #+#             */
/*   Updated: 2022/11/22 10:36:33 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h> 
#include <libft.h>

size_t	ft_strlen(const char *s)
{
	int	length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
