/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:02:04 by aparedes          #+#    #+#             */
/*   Updated: 2022/03/29 10:22:43 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n)
	{
		*(char *)(s + count) = '\0';
		count++;
	}
}

/* #include <stdio.h>
#include <string.h>
#include <unistd.h>

int main (void)
{
    char str[20]="12311231223sdasdas";
    
    ft_bzero(str+1 , 1); 
    printf("%s",str);
     memset(str + 10 , 'a', 9);
    printf("%s",str); 
    printf("\n");
    return(0);
} */