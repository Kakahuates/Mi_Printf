/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksanchez <ksanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 19:40:10 by kakahuate         #+#    #+#             */
/*   Updated: 2025/05/05 11:44:01 by ksanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temporal;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temporal = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temporal;
	}
}
