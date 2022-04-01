/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:09:52 by aparedes          #+#    #+#             */
/*   Updated: 2022/03/29 19:07:36 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*assign_src;
	char	*assign_dst;
	size_t	counter;

	counter = -1;
	assign_src = (char *)src;
	assign_dst = (char *)dst;
	if (assign_src < assign_dst)
		while ((int)(--n) >= 0)
			*(assign_dst + n) = *(assign_src + n);
	else
		while (++counter < n)
			*(assign_dst + counter) = *(assign_src + counter);
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