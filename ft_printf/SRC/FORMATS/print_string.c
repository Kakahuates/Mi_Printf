/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksanchez <ksanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:43:32 by kakahuate         #+#    #+#             */
/*   Updated: 2025/05/27 15:02:17 by ksanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_string(char *str)
{
	int	length;
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
