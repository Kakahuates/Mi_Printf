/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksanchez <ksanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 20:44:49 by kakahuate         #+#    #+#             */
/*   Updated: 2025/05/27 14:49:23 by ksanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>

# include "libft.h"

//Principal  function
int		ft_printf(const char *format, ...);

//evaluative function
int		eval_format(const char *format, va_list args, int *i);

//individual formats
int		print_char(char c);
int		print_string(char *str);
int		print_number(int n);
int		print_unsigned(unsigned int n);
int		print_hex(unsigned int n, int uppercase);
int		print_pointer(void *ptr);
int		print_percent(void);

//utils functions
char	*ft_u_itoa(unsigned int n);
char	*ft_utoa_base(unsigned long num, int base, int uppercase);

#endif