/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksanchez <ksanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:55:06 by kakahuate         #+#    #+#             */
/*   Updated: 2025/05/27 15:03:24 by ksanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	base_length(unsigned long n, int base)
{
	int		length;

	length = 1;
	while (n >= (unsigned long) base)
	{
		n /= base;
		length += 1;
	}
	return (length);
}

char	*ft_utoa_base(unsigned long num, int base, int uppercase)
{
	char			*digits;
	char			*str;
	int				length;
	unsigned long	temp;

	if (uppercase)
		digits = "0123456789ABCDEF";
	else
		digits = "0123456789abcdef";
	length = base_length(num, base);
	temp = num;
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (!str)
		return (NULL);
	str[length] = '\0';
	while (length > 0)
	{
		str[length - 1] = digits[temp % base];
		temp /= base;
		length -= 1;
	}
	return (str);
}
