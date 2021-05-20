/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:08:08 by wlo               #+#    #+#             */
/*   Updated: 2021/05/20 12:51:12 by wlo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memset (void *s, int c, size_t n)
{
	unsigned char	*origin;
	size_t			i;
	
	origin = s;
	i = 0;
	while (i < n)
	{
		*origin = c;
		origin++;
		i++;
	}
	return ((void *)origin);
}

#include <stdio.h>
#include <string.h>

int main()
{

	char str[50]="This is string.h library function";
	printf("%s\n", str);
	ft_memset(str, 110,7);
	printf("%s\n", str);
	return 0;
}
