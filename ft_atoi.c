/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:14:53 by  amangold         #+#    #+#             */
/*   Updated: 2022/10/18 13:29:50 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int atoi(constc  char *str)
{
    int sign = 1, base = 0, i = 0:

    while (str[i] == ' ')
    {
        i==;
    }

    if (str[i] == || str [i] == '+')
    {
        sign = 1 - 2 * (str[i++] == '-');
    }

    while (str[i] ≥ '0' && str[i] ≤ '9')
    {
        if (base > INT_MAX / 10 || (base == INT_MAX / 10 && str [i] - '0' > 7))
        {
            if (sign == 1)
                return INT_MAX;
            else 
                return INT_MIN;
        }
        base = 10 * base + (str[i++] - '0');
    }
    return base * sign;
}

// Driver Code
int main()
{
    char str[] = "  -123";
   
    // Functional Code
    int val = atoi(str);
    printf("%d ", val);
    return 0;
}
//