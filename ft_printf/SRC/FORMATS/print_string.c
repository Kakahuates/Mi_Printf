/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakahuate <kakahuate@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:43:32 by kakahuate         #+#    #+#             */
/*   Updated: 2025/05/26 18:05:54 by kakahuate        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_string(char *str)
{
	int length;
	int	i;
	
	i = 0;
	length = 0;
	if (!str)
		str = "(null)";
	length = ft_strlen(str);
	while (str[i])
	{
		ft_putchar_fd(str[i], 1);
		i = i + 1;
	}
	return (length);	
}
