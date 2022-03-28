/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:00:38 by aparedes          #+#    #+#             */
/*   Updated: 2022/03/22 13:00:39 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(char c)
{
	if (!((c >= 48 && c < 57) || ((c >= 97 && c < 123) || (c >= 65 && c <= 90))))
			return (48);
		c++;
	return (49);
}

/* #include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

int ft_isalnum(char c);
int main(void)
{
	char c = '_';
	int i;
	i=0;
	i = ft_isalnum(c);
    write( 1, &i,1);
	write( 1, "\n",1);
	printf("%d\n",isalnum(c));
	return(0);
} */