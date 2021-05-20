/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlo <wlo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 15:55:12 by wlo               #+#    #+#             */
/*   Updated: 2021/03/20 20:19:35 by wlo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*unsi_s1;
	unsigned char	*unsi_s2;

	unsi_s1 = (unsigned char *)s1;
	unsi_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n && *unsi_s1 && *unsi_s2)
	{
		if (*unsi_s1 != *unsi_s2)
			return (*unsi_s1 - *unsi_s2);
		i++;
		unsi_s1++;
		unsi_s2++;
	}
	if ((*unsi_s1 == '\0' || *unsi_s2 == '\0') && i < n)
		return (*unsi_s1 - *unsi_s2);
	return (0);
}
