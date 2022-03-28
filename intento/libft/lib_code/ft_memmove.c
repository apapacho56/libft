/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:09:52 by aparedes          #+#    #+#             */
/*   Updated: 2022/03/28 11:01:28 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char *ft_strlen_choose(char *str1, char *str2)
{
    unsigned int count1;
    unsigned int count2;
    
    count1 = 0;
    count2 = 0;

    while(str1[count1] != '\0')
        count1++;
    while(str2[count2] != '\0')
        count2++;
    if(count1 > count2)
        return (str1);
    return (str2);
}

void *ft_memmove(void *dst, const void *src, size_t n)
{
    size_t count;
    
    char *buffer;
    char *assign_src = (char *)src;
    char *assign_dst = (char *)dst;

    buffer = ft_strlen_choose(assign_dst, assign_src);

    count = 0;
    while(count < n)
    {
        buffer[count] = assign_src[count];
        assign_dst[count] = buffer[count];
        count++;
        
    }
    return(assign_dst); 
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
