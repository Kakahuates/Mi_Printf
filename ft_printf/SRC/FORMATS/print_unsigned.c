/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksanchez <ksanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:50:23 by kakahuate         #+#    #+#             */
/*   Updated: 2025/05/27 12:48:58 by ksanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsigned(unsigned int n)
{
	char	*str;
	int		i;
	int		length;

	i = 0;
	str = ft_u_itoa(n);
	if (!str)
		return (0);
	length = ft_strlen(str);
	while (str[i])
	{
		ft_putchar_fd(str[i], 1);
		i += 1;
	}
	free(str);
	return (length);
}
