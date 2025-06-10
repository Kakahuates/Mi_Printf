/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksanchez <ksanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 15:18:35 by kakahuate         #+#    #+#             */
/*   Updated: 2025/05/27 15:21:20 by ksanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer(void *ptr)
{
	unsigned long	address;
	char			*str;
	int				i;
	int				length;

	if (ptr == NULL)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	address = (unsigned long)ptr;
	i = 0;
	str = ft_utoa_base(address, 16, 0);
	write(1, "0x", 2);
	length = ft_strlen(str);
	while (str[i])
	{
		ft_putchar_fd(str[i], 1);
		i += 1;
	}
	free(str);
	return (length + 2);
}
