/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:16:19 by aparedes          #+#    #+#             */
/*   Updated: 2022/03/26 20:33:46 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(char c)
{
	if (!((c >= 0 && c < 127)))
			return (48);
		c++;
	return (49);
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