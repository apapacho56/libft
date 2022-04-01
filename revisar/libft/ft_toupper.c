/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:21:53 by aparedes          #+#    #+#             */
/*   Updated: 2022/03/29 12:08:52 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		c = c - 32;
		return (c);
	}
	return (c);
}

/* #include <stdio.h>
#include <ctype.h>
int main(void)
{
    int c;
    c = 'B';
    printf("La letra es: %c \n" ,ft_toupper(c));
    printf("La letra es: %c \n" ,toupper(c));
    return(0);
} */