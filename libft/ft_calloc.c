/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlo <wlo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 16:06:40 by wlo               #+#    #+#             */
/*   Updated: 2021/03/19 16:11:01 by wlo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*arr;

	if (nitems == 0 || size == 0)
	{
		arr = (void *)malloc(sizeof(0));
		if (!arr)
			return (0);
		return (arr);
	}
	arr = malloc(nitems * size);
	if (!arr)
		return (0);
	ft_bzero((void *)arr, nitems * size);
	return (arr);
}
