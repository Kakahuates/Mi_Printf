/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakahuate <kakahuate@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:55:06 by kakahuate         #+#    #+#             */
/*   Updated: 2025/05/22 14:55:41 by kakahuate        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_utoa_base(unsigned int n, char *base)
{
	char			*str;
	int				length;
	unsigned int	temp;
	int				base_length;

	base_length = ft_strlen(base);
	length = 1;
	temp = n;
	while (temp /= base_length)
		length++;
	str = malloc(length + 1);
	if (!str)
		return (NULL);
	str[length] = '\0';
	while (length--)
	{
		str[length] = base[n % base_length];
		n /= base_length;
	}
	return (str);
}
