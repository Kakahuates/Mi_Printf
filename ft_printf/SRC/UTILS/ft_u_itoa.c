/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakahuate <kakahuate@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:51:51 by kakahuate         #+#    #+#             */
/*   Updated: 2025/05/26 18:21:01 by kakahuate        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_num_length(unsigned int n)
{
	int	length;

	length = 1;
	while (n >= 10)
	{
		n /= 10;
		length += 1;
	}
	return (length);
}

char	*ft_u_itoa(unsigned int n)
{
	char			*str;
	int				length;
	unsigned int	temp;

	length = ft_num_length(n);
	temp = n;
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (!str)
		return ((char *)0);
	str[length] = '\0';
	while (length > 0)
	{
		str[length - 1] = (temp % 10) + '0';
		temp /= 10;
		length -=1;
	}
	return (str);
}
