/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakahuate <kakahuate@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:50:23 by kakahuate         #+#    #+#             */
/*   Updated: 2025/05/22 14:54:33 by kakahuate        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsigned(unsigned int n)
{
	char	*str;
	int		length;

	str = ft_u_itoa(n);
	if (!str)
		return (0);
	length = ft_strlen(str);
	write(1, str, length);
	free(str);
	return (length);
}
