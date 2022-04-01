/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 10:54:20 by aparedes          #+#    #+#             */
/*   Updated: 2022/03/29 12:52:33 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
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