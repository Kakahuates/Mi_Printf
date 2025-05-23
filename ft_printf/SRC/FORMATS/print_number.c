/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakahuate <kakahuate@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:48:11 by kakahuate         #+#    #+#             */
/*   Updated: 2025/05/22 14:48:53 by kakahuate        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_number(int n)
{
	char	*str;
	int		length;
	
	str = ft_itoa(n);
	if (!str)
		return (0);
	length = ft_strlen(str);
	write(1, str, length);
	free(str);
	return (length);	
}
