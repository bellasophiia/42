/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:12:31 by  amangold         #+#    #+#             */
/*   Updated: 2022/12/09 11:45:50 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_putstr_fd("-2147483648", fd);
			return ;
		}
		else
		{
			ft_putchar_fd('-', fd);
			n = n * -1;
		}
	}
	if (n >= 10)
	{
		ft_putnbr_fd (n / 10, fd);
		ft_putchar_fd ((n % 10) + '0', fd);
	}
	else
		ft_putchar_fd((n + '0'), fd);
}
