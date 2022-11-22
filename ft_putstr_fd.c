/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:33:56 by  amangold         #+#    #+#             */
/*   Updated: 2022/10/27 11:24:36 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h> 
#include <string.h>

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(fd, &s, 1);
		s++;
	}
}
