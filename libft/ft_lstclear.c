/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlo <wlo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 12:54:37 by wlo               #+#    #+#             */
/*   Updated: 2021/03/20 19:41:31 by wlo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*temps;

	if (!(*lst))
		return ;
	current = (*lst);
	while (current->next != 0)
	{
		(*del)(current->content);
		temps = current->next;
		free(current);
		current = temps;
	}
	(*del)(current->content);
	free(current);
	(*lst) = 0;
}
