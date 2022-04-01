/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:16:10 by aparedes          #+#    #+#             */
/*   Updated: 2022/03/29 11:40:54 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (!((c >= 32 && c <= 126)))
		return (0);
	return (1);
}

/* #include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

int ft_isprint(char c);
int main(void)
{
	char c = '+';
	int i;
	i=0;
	i = ft_isprint(c);
    write( 1, &i,1);
	write( 1, "\n",1);
	printf("%d\n",isprint(c));
	return(0);
} */