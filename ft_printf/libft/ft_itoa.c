/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakahuate <kakahuate@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 12:02:12 by ksanchez          #+#    #+#             */
/*   Updated: 2025/05/23 13:38:19 by kakahuate        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countdigits(long n)
{
	int	counter;

	counter = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		counter++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}
static int	ft_handle_sign(long *number, char *str)
{
	if (*number < 0)
	{
		str[0] = '-';
		*number = -*number;
		return (1);
	}
	return (0);
}
static void	ft_fill_string(long number, char *str, int length, int is_negative)
{
	int	i;
	
	i = length - 1;
	if (is_negative)
		i = length - 1;
	while (number > 0)
	{
		str[i] = (number % 10) + '0';
		number /= 10;
		i--;
	}
	
}
char	*ft_itoa(int n)
{
	char	*str;
	size_t	length;
	long	number;
	int		is_negative;

	number = n;
	length = ft_countdigits(number);
	str = (char *)malloc(length + 1);
	if (!str)
		return (NULL);
	str[length] = '\0';
	if (number == 0)
	{
		str[0] = '0';
		return (str);
	}
	is_negative = ft_handle_sign(&number, str);
	ft_fill_string(number, str, length, is_negative);
	return (str);
}
