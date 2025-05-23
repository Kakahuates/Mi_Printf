/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakahuate <kakahuate@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 15:09:20 by kakahuate         #+#    #+#             */
/*   Updated: 2025/05/23 12:30:46 by kakahuate        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_ultoa(unsigned long n, char *base)
{
    char			*str;
    int				length;
    int				base_length;

    base_length = ft_strlen(base);
    length = 1;
    while (n /= base_length)
    	length++;
    str = malloc(length + 1);
    if (!str)
    	return ((char *)0);
    str[length] = '\0';
    while (length--)
    {
        str[length] = base[n % base_length];
        n /= base_length;
    }
    return (str);
}
