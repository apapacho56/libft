/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:00:38 by aparedes          #+#    #+#             */
/*   Updated: 2022/03/29 11:33:18 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isalnum(int c)
{
	if (!((c >= '0' && c <= '9') || ((c >= 'a' && c <= 'z')
				|| (c >= 'A' && c <= 'Z'))))
		return (0);
	return (c);
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