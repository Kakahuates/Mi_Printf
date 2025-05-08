/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakahuate <kakahuate@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:23:11 by kakahuate         #+#    #+#             */
/*   Updated: 2025/04/29 13:04:09 by kakahuate        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	finish;
	char	*result;

	start = 0;
	finish = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (finish > start && ft_strchr(set, s1[finish - 1]))
		finish--;
	result = (char *)ft_calloc(finish - start + 1, sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1 + start, finish - start + 1);
	return (result);
}
