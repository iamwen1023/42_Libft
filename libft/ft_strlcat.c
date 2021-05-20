/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlo <wlo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 15:59:02 by wlo               #+#    #+#             */
/*   Updated: 2021/03/20 20:27:13 by wlo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dst;

	if (size == 0)
		return (ft_strlen(src));
	else if (size < ft_strlen(dst))
		return (ft_strlen(src) + size);
	else
	{
		len_dst = ft_strlen(dst);
		i = 0;
		while (i + len_dst < size - 1)
		{
			dst[i + len_dst] = src[i];
			i++;
		}
		dst[i + len_dst] = '\0';
	}
	return (len_dst + ft_strlen(src));
}
