/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlo <wlo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 16:14:25 by wlo               #+#    #+#             */
/*   Updated: 2021/03/19 16:24:32 by wlo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy_bonus(char *dest, int index, char const *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[index + i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*arr;

	if (!s1 || !s2)
		return (0);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (len_s1 + len_s2 == 0)
		return (0);
	arr = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (!arr)
		return (0);
	ft_strcpy_bonus(arr, 0, s1);
	ft_strcpy_bonus(arr, len_s1, s2);
	arr[len_s1 + len_s2] = '\0';
	return (arr);
}
