/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakahuate <kakahuate@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 20:44:49 by kakahuate         #+#    #+#             */
/*   Updated: 2025/05/23 14:26:36 by kakahuate        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

# include "libft.h"

//Principal  function
int		ft_printf(const char *format, ...);

//evaluative function
int		eval_format(const char *c, va_list args);

//individual formats
int		print_char(int c);
int		print_string(char *str);
int		print_number(int n);
int		print_unsigned(unsigned int n);
int		print_hex(unsigned int n, char format);
int		print_pointer(void *ptr);

//utils functions
char	*ft_u_itoa(unsigned int n);
char	*ft_ultoa(unsigned long n, char *base);
char	*ft_utoa_base(unsigned int n, char *base);

#endif