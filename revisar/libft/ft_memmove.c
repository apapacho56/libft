/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:09:52 by aparedes          #+#    #+#             */
/*   Updated: 2022/03/30 13:02:50 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	counter;

	if (!dst && !src)
		return (0);
	counter = 0;
	if ((size_t)dst - (size_t)src < len)
	{
		counter = len - 1;
		while (counter < len)
		{
			((unsigned char *)dst)[counter] = ((unsigned char *)src)[counter];
			counter--;
		}
	}
	else
	{
		while (counter < len)
		{
			((unsigned char *)dst)[counter] = ((unsigned char *)src)[counter];
			counter++;
		}
	}
	return (dst);
}

/* int main()
{
    char str1[100] = "Learningisfun"; // Array of size 100
    char str2[100] = "Learninfun"; // Array of size 5
  
    puts("str1 before memmove ");
    puts(str1);
  
   // Copies contents of str2 to sr1 
    memmove(str1+8, str2, 10);
  
    puts("\nstr1 after memmove ");
    puts(str1);

    ft_memmove(str1+8, str2, 10);
  
    puts("\nstr1 after ft_memmove ");
    puts(str1);
    return (0);
}  */ 