/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksanchez <ksanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:46:28 by ksanchez          #+#    #+#             */
/*   Updated: 2025/05/05 10:56:36 by ksanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	totalsize;
	void	*ptr_mem;

	totalsize = 0;
	totalsize = nmemb * size;
	ptr_mem = malloc(totalsize);
	if (ptr_mem == NULL)
	{
		return (NULL);
	}
	ft_bzero(ptr_mem, totalsize);
	return (ptr_mem);
}
