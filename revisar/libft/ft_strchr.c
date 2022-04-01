/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:43:12 by aparedes          #+#    #+#             */
/*   Updated: 2022/03/29 15:07:17 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		counter;

	counter = 0;
	while (counter < (int)ft_strlen(s) + 1)
	{
		if (*(s + counter) == (char)c)
			return ((char *)s + counter);
		counter ++;
	}
	return (NULL);
}

/*
{
 #include <stdio.h>
#include <string.h>
int main () 
{
   const char str[] = "This is just a String"; 
   const char ch = 'A'; 
   char *p;

   p = strchr(str, ch);
   printf("String starting from %c is: %s \n", ch, p);

   printf("String starting from %c is: %s \n", ch, ft_strchr(str, ch));
   return (0);
} */