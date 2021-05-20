/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlo <wlo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 15:27:51 by wlo               #+#    #+#             */
/*   Updated: 2021/03/19 15:29:11 by wlo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *pointer1, void *pointer2, size_t size)
{
	unsigned char		*ptr_1;
	unsigned char		*ptr_2;
	size_t				i;

	ptr_1 = (unsigned char *)pointer1;
	ptr_2 = (unsigned char *)pointer2;
	i = 0;
	while (i < size)
	{
		if (ptr_1[i] != ptr_2[i])
			return (ptr_1[i] - ptr_2[i]);
		i++;
	}
	return (0);
}
