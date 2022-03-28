/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 10:54:20 by aparedes          #+#    #+#             */
/*   Updated: 2022/03/26 20:33:46 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char c)
{
	if (!((c >= 97 && c < 123) || (c >= 65 && c <= 90)))
			return (48);
		c++;
	return (49);
}

/* #include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

int ft_isalpha(char c);
int main(void)
{
	char c = '.';
	int i;
	i=0;
	i = ft_isalpha(c);
    write( 1, &i,1);
	write( 1, "\n",1);
	printf("%d\n",isalpha(c));
	return(0);
} */