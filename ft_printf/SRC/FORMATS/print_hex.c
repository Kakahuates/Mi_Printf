/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakahuate <kakahuate@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:56:26 by kakahuate         #+#    #+#             */
/*   Updated: 2025/05/26 18:29:35 by kakahuate        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned int n, int uppercase)
{
	int		length;
	int		i;
	char	*str;

	str = ft_utoa_base(n, 16, uppercase);
	length = ft_strlen(str);
	i = 0;
	while (str[i])
	{
		ft_putchar_fd(str[i], 1);
		i += 1;
	}
	free(str);
	return (length);
}
