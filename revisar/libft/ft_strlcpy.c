/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:03:19 by aparedes          #+#    #+#             */
/*   Updated: 2022/03/29 15:22:51 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	counter;
	size_t	len;

	counter = 0;
	len = ft_strlen(src);
	if (!dst || !src)
		return (0);
	if (!dstsize)
		return (len);
	while (src[counter] != '\0' && counter < dstsize)
	{
		dst[counter] = src[counter];
		counter++;
	}
	if (dstsize < len)
		dst[dstsize - 1] = '\0';
	else if (dstsize != 0)
		dst[counter] = '\0';
	return (len);
}
