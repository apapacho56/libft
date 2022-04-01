/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:41:51 by aparedes          #+#    #+#             */
/*   Updated: 2022/03/29 14:34:03 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	counter;
	char	*assign_dst;
	char	*assign_src;

	assign_dst = dst;
	assign_src = (char *)src;
	counter = 0;
	while (counter < n)
	{
		*(assign_dst + counter) = *(assign_src + counter);
		counter ++;
	}
	return (dst);
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