/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakahuate <kakahuate@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:51:51 by kakahuate         #+#    #+#             */
/*   Updated: 2025/05/22 14:53:56 by kakahuate        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_u_itoa(unsigned int n)
{
	char			*str;
	int				length;
	unsigned int	temp;

	length = 1;
	temp = n;
	while (temp /= 10)
		length++;
	str = malloc(length + 1);
	if (!str)
		return ((char *)0);
	str[length] = '\0';
	while (length--)
	{
		str[length] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
