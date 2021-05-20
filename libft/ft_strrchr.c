/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlo <wlo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 15:54:27 by wlo               #+#    #+#             */
/*   Updated: 2021/03/19 15:54:43 by wlo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	size_t	len;
	size_t	index;

	len = ft_strlen(s);
	if (len == 0)
		return (0);
	index = len - 1;
	while (index > 0)
	{
		if (c == s[index])
			return ((char *)&s[index]);
		index--;
	}
	if (c == s[index])
		return ((char *)&s[index]);
	if (c == '\0')
		return ((char *)&s[len]);
	return (0);
}
