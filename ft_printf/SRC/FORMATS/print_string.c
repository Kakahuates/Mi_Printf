/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakahuate <kakahuate@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:43:32 by kakahuate         #+#    #+#             */
/*   Updated: 2025/05/22 14:47:04 by kakahuate        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_string(char *str)
{
	int length;
	
	if (str == NULL)
	{
		return (write(1, "NULL", 4));
	}
	length = ft_strlen(str);
	write(1, str, length);
	return (length);	
}
