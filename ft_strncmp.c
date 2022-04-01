/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:55:46 by aparedes          #+#    #+#             */
/*   Updated: 2022/03/29 15:31:19 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	counter;

	counter = 0;
	if (n == 0)
		return (0);
	while (counter < n - 1 && s1[counter] != '\0'
		&& s2[counter] != '\0' && s1[counter] == s2[counter])
		counter ++;
	return ((unsigned char)s1[counter] - (unsigned char)s2[counter]);
}
