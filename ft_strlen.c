/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:34:51 by  amangold         #+#    #+#             */
/*   Updated: 2022/10/25 12:39:39 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h> 
#include <libft.h>

size_t	ft_strlen(const char *s)
{
	int	length;

	length = 0;
	while (string[length] != '\0')
	{
		length++;
	}
	return (length);
}
