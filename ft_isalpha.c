/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:06:45 by  amangold         #+#    #+#             */
/*   Updated: 2022/11/29 17:33:26 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include<stdio.h> */
#include "libft.h"

int	ft_isalpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z')))
			return (0);
		i++;
	}
	return (1);
}
