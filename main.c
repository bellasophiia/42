/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:53:10 by  amangold         #+#    #+#             */
/*   Updated: 2022/12/15 19:40:59 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void){
	char *s = "hello!";
	char **ret = ft_split(s,' ');
	int i = 0;
	while (ret[i] != NULL)
	{
		printf("Word number %d: %s \n",i , ret[i]);
		i++;
	}
}
