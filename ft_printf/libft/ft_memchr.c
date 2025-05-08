/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksanchez <ksanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:08:20 by ksanchez          #+#    #+#             */
/*   Updated: 2025/05/05 10:55:29 by ksanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		char_to_find;
	const unsigned char	*ptr_s;

	i = 0;
	ptr_s = (const unsigned char *)s;
	char_to_find = (unsigned char)c;
	while (i < n)
	{
		if (char_to_find == ptr_s[i])
			return ((void *)&ptr_s[i]);
		i++;
	}
	return (NULL);
}
