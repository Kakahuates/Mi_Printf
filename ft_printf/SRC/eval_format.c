/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_format.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakahuate <kakahuate@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 15:48:31 by kakahuate         #+#    #+#             */
/*   Updated: 2025/05/26 18:46:01 by kakahuate        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	eval_format(const char *format, va_list args, int *i)
{
	int		counter;
	char	spec;

	counter = 0;
	*i += 1;
	spec = format[*i]; 
	if (spec == 'c')
		counter = print_char(va_arg(args, int));
	if (spec == 's')
		counter = print_string(va_arg(args, char *));
	if (spec == 'd' || spec == 'i')
		counter = print_number(va_arg(args, int));
	if (spec == 'u')
		counter = print_unsigned(va_arg(args, unsigned int));
	if (spec == 'x')
		counter = print_hex(va_arg(args, unsigned int), 0);
	if (spec == 'X')
		counter = print_hex(va_arg(args, unsigned int), 1);
	if (spec == 'p')
		counter = print_pointer(va_arg(args, void *));
	if (spec == '%')
		counter = print_percent();
	return(counter);
}
