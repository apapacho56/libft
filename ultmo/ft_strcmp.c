/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 03:51:36 by jrameau           #+#    #+#             */
/*   Updated: 2022/03/30 13:15:32 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	int		counter;

	counter = 0;
	while (*(s1 + counter) && *(s1 + counter) == *(s2 + counter))
		counter++;
	return (*((unsigned char *)s1 + counter) - *((unsigned char *)s2 + counter));
}
