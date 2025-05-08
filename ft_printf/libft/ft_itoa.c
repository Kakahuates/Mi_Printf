/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakahuate <kakahuate@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 12:02:12 by ksanchez          #+#    #+#             */
/*   Updated: 2025/05/01 19:06:45 by kakahuate        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countdigits(int n)
{
	int	counter;

	counter = 0;
	if (n <= 0)
		counter = 1;
	else
		counter = 0;
	while (n != 0)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	length;
	long	number;

	number = n;
	length = ft_countdigits(n);
	str = (char *)malloc(length + 1);
	if (!str)
		return (NULL);
	str[length] = '\0';
	if (number < 0)
	{
		str[0] = '-';
		number = -number;
	}
	while (length > 0)
	{
		length--;
		if (str[length] == '-')
			break ;
		str[length] = (number % 10) + '0';
		number /= 10;
	}
	return (str);
}
