/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksanchez <ksanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:12:07 by ksanchez          #+#    #+#             */
/*   Updated: 2025/05/05 10:54:34 by ksanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	c_c;

	i = 0;
	c_c = c % 256;
	while (s[i] != '\0')
	{
		if (((char *)s)[i] == (char)c_c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (c_c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (0);
}
