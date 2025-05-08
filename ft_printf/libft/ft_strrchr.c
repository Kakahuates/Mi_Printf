/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakahuate <kakahuate@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:32:50 by ksanchez          #+#    #+#             */
/*   Updated: 2025/04/25 14:33:31 by kakahuate        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <string.h>
#include <stdio.h> */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last_coinc;

	i = 0;
	last_coinc = NULL;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			last_coinc = (char *) &s[i];
			return (last_coinc);
		}
		i--;
	}
	return (last_coinc);
}
