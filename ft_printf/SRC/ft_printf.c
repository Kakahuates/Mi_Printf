/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakahuate <kakahuate@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 20:31:39 by kakahuate         #+#    #+#             */
/*   Updated: 2025/05/26 18:50:33 by kakahuate        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;
	int		temp;
	
	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			temp = eval_format(format, args, &i);
			count = count + temp;
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			count += 1;
		}
		i += 1;
	}
	va_end(args);
	return (count);
}
