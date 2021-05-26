/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlo <wlo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 16:00:43 by wlo               #+#    #+#             */
/*   Updated: 2021/03/21 15:53:02 by wlo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp_bonus(char *s1, const char *s2)
{
	while (*s2 != 0)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	len_s2;
	char	*s1_1;

	s1_1 = (char *)s1;
	len_s2 = ft_strlen(s2);
	// nn need to protect s1
	//if (!s1)
	//	return 0;
	if (len_s2 == 0 || len == 0)
		return (s1_1);
	while (len > 0)
	{
		if (*s1_1 == s2[0])
		{
			if (len_s2 > len)
				return (0);
			if (ft_strcmp_bonus(s1_1, s2) == 0)
				return (s1_1);
		}
		s1_1++;
		len--;
	}
	return (0);
}
