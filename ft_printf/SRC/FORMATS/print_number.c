/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakahuate <kakahuate@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:48:11 by kakahuate         #+#    #+#             */
/*   Updated: 2025/05/26 18:09:37 by kakahuate        ###   ########.fr       */
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
