/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlo <wlo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 14:44:29 by wlo               #+#    #+#             */
/*   Updated: 2021/03/19 14:45:33 by wlo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_des;
	unsigned char	*ptr_src;
	size_t			i;

	ptr_des = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	if (ptr_des == 0 && ptr_src == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		*(ptr_des + i) = *(ptr_src + i);
		i++;
	}
	return (dest);
}
