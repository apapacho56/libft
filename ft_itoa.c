/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:01:17 by aparedes          #+#    #+#             */
/*   Updated: 2022/04/06 14:53:22 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_tamano(int n)
{
	int	count;

	if (n == 0)
		return (1);
	count = 0;
	while (n != 0)
	{
		n = (n / 10);
		count++;
	}
	return (count);
}

static void	ft_ver(int sign, char *buffer)
{
	if (sign == (-1))
	{
		buffer[0] = '-';
	}
}

static char	*ft_buffer(int n, char *buffer, int c1)
{
	if (n < 0)
	{
		buffer = ft_calloc(c1 + 2, sizeof(char));
	}
	else
		buffer = ft_calloc(c1 + 1, sizeof(char));
	return (buffer);
}

char	*ft_itoa(int n)
{
	int		c1;
	int		c2;
	int		sign;
	char	*buffer;

	c2 = 0;
	sign = 1;
	c1 = ft_tamano(n);
	buffer = NULL;
	if (n < 0)
	{
		sign = -1;
		c1++;
	}
	buffer = ft_buffer(n, buffer, c1);
	if (buffer == NULL)
		return (NULL);
	while (c2 < c1)
	{
		c1--;
		buffer[c1] = ((n % 10) * sign) + '0';
		n = n / 10;
	}
	ft_ver(sign, buffer);
	return (buffer);
}
