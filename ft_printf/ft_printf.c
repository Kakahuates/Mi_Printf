/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakahuate <kakahuate@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 20:31:39 by kakahuate         #+#    #+#             */
/*   Updated: 2025/05/21 12:41:13 by kakahuate        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(va_list args)
{
	char	c;
	
	c = va_arg(args, int);
	write(1, &c, 1);
	return (1);
}
char	*print_string(va_list args)
{
	
}
int	eval_format(char c, va_list args)
{
	int	counter;

	switch (c)
	{
	case 'c':
		counter += print_char(va_arg(args, int));
		break;
	case 's':
		counter += print_string(va_arg(args, char *));
	default:
		break;
	}
	return (counter);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	i;
	int	printed;
	int	counter;
	
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
		}
		else if (format[i] == '%')
		{
			i++;
			counter += eval_format(format[i], args);
			++;
		}
		
	}
	
}