/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakahuate <kakahuate@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 15:18:35 by kakahuate         #+#    #+#             */
/*   Updated: 2025/05/22 15:44:51 by kakahuate        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_pointer(void *ptr)
{
    unsigned long   address;
    int             length;
    char            *str;
    
    address = (unsigned long)ptr;
    str = ft_utoa_base(address, "0123456789abcdef");
    if (!str)
        return (0);
    write(1, "0x", 2);
    length = ft_strlen(str);
    write(1, str, length);
    free(str);
    return (length + 2);
}
