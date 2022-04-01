/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:47:36 by aparedes          #+#    #+#             */
/*   Updated: 2022/03/29 11:15:37 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
		count ++;
	return (count);
}

/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[]="Hola comote va _??";
    printf("%d\n",ft_strlen(str));
    return(0);
} */