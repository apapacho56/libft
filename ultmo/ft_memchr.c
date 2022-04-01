/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:08:08 by aparedes          #+#    #+#             */
/*   Updated: 2022/03/29 10:32:56 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*assign_str;
	size_t	counter;

	counter = 0;
	assign_str = (char *)str;
	while (counter < n - 1)
	{
		if (assign_str[counter] == c)
		{
			return (assign_str + counter);
		}
		counter++;
	}
	return (0);
}
/* #include <stdio.h>
#include <string.h>
int main () 
{
   const char str[] = "This is just a String"; 
   const char ch = 'S'; 
   char *p;

   p = memchr(str, ch, 18);
   printf("String starting from %c is: %s \n", ch, p);

   printf("String starting from %c is: %s \n", ch, ft_memchr(str, ch,18));
   return (0);
} */