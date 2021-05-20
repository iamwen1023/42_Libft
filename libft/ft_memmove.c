/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlo <wlo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 14:53:47 by wlo               #+#    #+#             */
/*   Updated: 2021/03/19 14:55:50 by wlo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void 	*ft_memmove(void *dest, void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (dest == 0 && src == 0)
		return (0);
	if (n == 0)
		return (dest);
	if (d < s)
		return (ft_memcpy(dest, src, n));
	i = (unsigned char)n - 1;
	while (d > s && i > 0)
	{
		*(d + i) = *(s + i);
		i--;
	}
	*(d + i) = *(s + i);
	return ((void *)dest);
}
