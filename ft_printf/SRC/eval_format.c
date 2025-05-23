/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_format.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakahuate <kakahuate@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 15:48:31 by kakahuate         #+#    #+#             */
/*   Updated: 2025/05/23 13:10:08 by kakahuate        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	eval_format(char c, va_list args)
{
	int	counter;

	counter = 0;
	if (c == 'c')
		counter += print_char(args);
	else if (c == 's')
		counter += print_string(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		counter += print_number(va_arg(args, int));
	else if (c == 'u')
		counter += print_unsigned(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		counter += print_hex(va_arg(args, unsigned int), c);
	else if (c == 'p')
		counter += print_pointer(va_arg(args, void *));
	else if (c == '%')
		counter += print_percent();
	return (counter);
}
