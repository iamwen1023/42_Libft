/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:52:55 by wlo               #+#    #+#             */
/*   Updated: 2021/05/25 10:14:12 by wlo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	if (nmemb == 0 || size == 0)
	{
		arr = malloc(sizeof(0));
		if (!arr)
			return (0);
	}
	arr = malloc(nmemb * size);
	if (!arr)
		return (0);
	ft_bzero(arr, nmemb * size);
	return (arr);
}
