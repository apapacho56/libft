/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 08:56:10 by aparedes          #+#    #+#             */
/*   Updated: 2022/03/31 20:25:35 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <strings.h>
# include <ctype.h>

// Parámetros s1: string a recortar.
// conjunto: El conjunto de referencia de caracteres para recortar.
// Valor de retorno La cadena recortada.
// NULL si falla la asignación.
// Descripción Asigna (con malloc(3)) y devuelve una copia de
// 's1' con los caracteres especificados en 'set' eliminados
// desde el principio y el final de la cadena
size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
		count ++;
	return (count);
}
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
char	*ft_strrchr(const char *s, int c)
{
	int			len;
	const char	*start;

	start = s;
	len = ft_strlen(s);
	s = (s + len);
	while (*s != *start && c != *s)
		s--;
	if (c == *s)
		return ((char *)s);
	return (0);
}


char	*ft_strchr(const char *s, int c)
{
	int		counter;

	counter = 0;
	while (counter < (int)ft_strlen(s) + 1)
	{
		if (*(s + counter) == (char)c)
			return ((char *)s + counter);
		counter ++;
	}
	return (NULL);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	count;

	if (!set || !s1)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	count = ft_strlen(s1);
	while (*s1 && ft_strchr(set, s1[count]))
		count--;
	return (ft_substr(s1, 0, count + 1));
}

int main()
{
	ft_strtrim("a", "a");
}

#include <stdio.h>

// int main()
// {
// 	const char s1[] = "lorem ipsum dolor sit amet";
// 	const char s2[] = "lte";
// 	char *rsp;

// 	ft_strtrim(s1, s2);
// 	// printf("result :%s \n", rsp);
// 	// printf("%zu", ft_strlen(rsp));
// 	return(0);
// }

// /* char	*ft_strtrim(char const *s1, char const *set)
// {
// 	size_t	i;

// 	if (!s1 || !set)
// 		return (0);
// 	while (*s1 && ft_strchr(set, *s1))
// 		s1++;
// 	i = ft_strlen(s1);
// 	while (i && ft_strchr(set, s1[i]))
// 		i--;
// 	return (ft_substr(s1, 0, i + 1));
// }s */