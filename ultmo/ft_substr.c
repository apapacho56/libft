/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:11:06 by aparedes          #+#    #+#             */
/*   Updated: 2022/03/30 13:27:16 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// s: la cadena a partir de la cual crear la subcadena.
// start: el índice de inicio de la subcadena en el cadena 's'.
// len: La longitud máxima de la subcadena.

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buffer;
	size_t	inicio;
	size_t	counter;

	inicio = start;
	counter = 0;
	buffer = (char *)malloc(len +1);
	if (!s || !buffer)
		return (NULL);
	while (inicio < ft_strlen(s) && counter < len)
	{
		buffer[counter] = s[inicio];
		counter ++;
		inicio ++;
	}
	buffer[counter] = '\0';
	return (buffer);
}
