/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksanchez <ksanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:48:11 by kakahuate         #+#    #+#             */
/*   Updated: 2025/05/27 14:54:01 by ksanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_number(int n)
{
	char	*str;
	int		i;
	int		length;

	str = ft_itoa(n);
	if (!str)
		return (0);
	length = ft_strlen(str);
	i = 0;
	while (str[i])
	{
		ft_putchar_fd(str[i], 1);
		i = i + 1;
	}
	free(str);
	return (length);
}
