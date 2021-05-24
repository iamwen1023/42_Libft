/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlo <wlo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 14:51:07 by wlo               #+#    #+#             */
/*   Updated: 2021/03/19 14:52:02 by wlo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;
	size_t			i;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	if (ptr_dest == 0 && ptr_src == 0)
		return (0);
	i = 0;
	while (i < n && *ptr_src != (unsigned char)c)
	{
		*ptr_dest++ = *ptr_src++;
		i++;
	}
	if (i >= n && *ptr_src != (unsigned char)c)
		return (0);
	*ptr_dest++ = *ptr_src++;
	return ((void *)ptr_dest);
}


int		check_c(const unsigned char *src, int c)
{
	while (*src)
	{
		if (*src == c)
			return (1);
		src++;
	}
	return (0);
}

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*ch_dest;
	unsigned char	*ch_src;
	size_t	i;

	ch_src = (unsigned char*)src;
	ch_dest = (unsigned char*)dest;
	if (ch_src == 0 && ch_dest == 0)
		return (0);
	i = 0;
	while (i < n && ch_src[i] != (unsigned char )c)
	{
		ch_dest[i] = ch_src[i];
		i++;
	}
	if (i >= n && ch_src[i] != (unsigned char)c)
		return (0);
	ch_dest[i] = ch_src[i];
	return (dest);
}
