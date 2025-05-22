/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_format.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakahuate <kakahuate@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 15:48:31 by kakahuate         #+#    #+#             */
/*   Updated: 2025/05/22 15:49:18 by kakahuate        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	eval_format(char c, va_list args)
{
	int	counter;

	counter = 0;
	switch (c)
	{
	case 'c':
		counter += print_char(va_arg(args, int));
		break;
	case 's':
		counter += print_string(va_arg(args, char *));
		break;
	case 'd':
	case 'i':
		counter += print_number(va_arg(args, int));
		break;
	case 'u':
		counter += print_unsigned(va_arg(args, unsigned int));
		break;
	case 'x':
	case 'X':
		counter += print_hex(va_arg(args, unsigned int), c);
		break;
	case 'p':
		counter += print_pointer(va_arg(args, void *));
		break; 
	case '%':
		counter += print_percent();
		break; 
	default:
		break;
	}
	return (counter);
}
