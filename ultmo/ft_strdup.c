/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 09:55:01 by aparedes          #+#    #+#             */
/*   Updated: 2022/03/30 11:04:26 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*buffer;

	buffer = malloc(sizeof(char) * (ft_strlen(s1)+1));
	if (!buffer)
		return (0);
	buffer = ft_memcpy(buffer, s1, (ft_strlen(s1)+1));
	return (buffer);
}

// #include <stdlib.h>
// #include <unistd.h>
// #include <string.h>
// #include "../../../libft.h"

// void	ft_print_result(char const *s)
// {
// 	int		len;

// 	len = 0;
// 	while (s[len])
// 		len++;
// 	write(1, s, len);
// }

// int		main(int argc, const char *argv[])
// {
// 	char	str[] = "lorem ipsum dolor sit amet";
// 	char	*str_dup;

// 	alarm(5);
// 	if (argc == 1)
// 		return (0);
// 	if (atoi(argv[1]) == 1)
// 	{
// 		if (!(str_dup = ft_strdup(str)))
// 			ft_print_result("NULL");
// 		else
// 			ft_print_result(str_dup);
// 		if (str_dup == str)
// 			ft_print_result("\nstr_dup's adress == str's adress");
// 	}
// 	return (0);
// }