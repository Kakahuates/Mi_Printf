/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakahuate <kakahuate@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:23:05 by kakahuate         #+#    #+#             */
/*   Updated: 2025/04/25 14:45:20 by kakahuate        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		length;
	char	*copy;

	length = ft_strlen(s);
	copy = (char *)malloc(length + 1);
	if (copy == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (i < length + 1)
		{
			copy[i] = s[i];
			i++;
		}
	}
	return (copy);
}
