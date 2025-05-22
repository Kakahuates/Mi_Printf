/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakahuate <kakahuate@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:56:26 by kakahuate         #+#    #+#             */
/*   Updated: 2025/05/22 14:56:55 by kakahuate        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned int n, char format)
{
	int		length;
	char	*str;
	char	*base;

	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	str = ft_utoa_base(n,base);
	if (!str)
		return (0);
	length = ft_strlen(str);
	write(1,str,length);
	free(str);
	return (length);
}
