/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:52:41 by aparedes          #+#    #+#             */
/*   Updated: 2022/03/26 20:33:46 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(char c)
{
	if (!((c >= 48 && c < 57) ))
			return (48);
		c++;
	return (49);
}

/* #include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

int ft_isdigit(char c);
int main(void)
{
	char c = 'a';
	int i;
	i=0;
	i = ft_isdigit(c);
    write( 1, &i,1);
	write( 1, "\n",1);
	printf("%d\n",isdigit(c));
	return(0);
} */