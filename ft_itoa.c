/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:48:37 by manykhac          #+#    #+#             */
/*   Updated: 2022/04/26 19:45:48 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	size(int n)
{
	int	i;

	i = 0 ;
	if (n < 0 || n == 0)
	{
		n *= -1;
		i++;
	}
	while (n)
	{
	n /= 10;
	i++;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	int				i;
	int				index;
	unsigned int	num;
	char			*ptr;

	num = n;
	i = size(n);
	index = 0;
ptr = malloc (i);
ptr[--i] = '\0';
	if (n < 0)
	{
		num = n * -1;
		ptr[index] = '-';
		index++;
	}
	while (index < i--)
	{
		ptr[i] = num % 10 + '0';
		num /= 10;
	}
	return (ptr);
}
