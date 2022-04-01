/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:16:19 by aparedes          #+#    #+#             */
/*   Updated: 2022/03/29 12:33:21 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/* #include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

int ft_isascii(char c);
int main(void)
{
	char c = '`';
	int i;
	i=0;
	i = ft_isascii(c);
    write( 1, &i,1);
	write( 1, "\n",1);
	printf("%d\n",isascii(c));
	return(0);
} */