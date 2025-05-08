/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakahuate <kakahuate@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:01:55 by kakahuate         #+#    #+#             */
/*   Updated: 2025/04/26 17:25:13 by kakahuate        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	s_length;
	size_t	real_length;
	char	*substring;

	s_length = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= s_length)
	{
		substring = (char *)malloc(1);
		if (!substring)
			return (NULL);
		substring[0] = '\0';
		return (substring);
	}
	if (len > s_length - start)
		real_length = s_length - start;
	else
		real_length = len;
	substring = (char *)malloc(real_length + 1);
	if (!substring)
		return (NULL);
	ft_strlcpy(substring, s + start, real_length + 1);
	return (substring);
}
