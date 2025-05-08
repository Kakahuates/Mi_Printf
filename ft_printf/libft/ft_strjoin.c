/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakahuate <kakahuate@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 17:31:32 by kakahuate         #+#    #+#             */
/*   Updated: 2025/04/26 21:06:44 by kakahuate        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_len;
	char	*full_str;

	if (!s1 || !s2)
		return (NULL);
	total_len = ft_strlen(s1) + ft_strlen(s2);
	full_str = (char *)malloc(sizeof(char) * (total_len + 1));
	if (!full_str)
		return (NULL);
	ft_strlcpy(full_str, s1, total_len + 1);
	ft_strlcat(full_str, s2, total_len + 1);
	return (full_str);
}
