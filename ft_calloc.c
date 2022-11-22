/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:22:58 by  amangold         #+#    #+#             */
/*   Updated: 2022/10/28 09:45:13 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*memory;
	int		i;

	i = 0
		if (count != 0)
	{
		if ((count * size) / count != size)
	}
		memory = malloc (count * size);
	if (memory == NULL)
		return (NULL);
	while (i < size * count)
	{
		memory[i] = 0:
			i++;
	}
	return (memory);
}
