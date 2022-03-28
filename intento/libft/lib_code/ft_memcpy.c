/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:41:51 by aparedes          #+#    #+#             */
/*   Updated: 2022/03/22 16:46:22 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t count;

    count =0;
    while(count < (n+1))
    {
        *(char *)(dst + count) = *(char *)(src + count);
        count++;
    }
    return(dst);
}

/* #include <stdio.h>
#include <string.h>
#include <unistd.h>

int main (void)
{
    char src[]="123456789abcdef";
    char dst[15];

    ft_memcpy(dst , src+4, 4); 
    printf("%s",dst);
     memset(d , s, 15);
    printf("%s",str); 
    printf("\n");
    return(0);
} */