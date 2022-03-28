/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:24:17 by aparedes          #+#    #+#             */
/*   Updated: 2022/03/28 11:01:30 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memset(void *ptr, int x, size_t n)
{
    size_t count;

    count =0;
    // valor desplazado hasta count;
    while(count < n)
    {
        *(char *)(ptr + count) = x;
        count++;
    }
    return(ptr);
}

