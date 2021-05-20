/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:52:55 by wlo               #+#    #+#             */
/*   Updated: 2021/05/20 14:29:36 by wlo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ch_dest;
	const unsigned char	*ch_src;
	size_t				i;
	
	ch_dest = dest;
	ch_src = src;
	i = 0;
	while (i < n && ch_src[i])
	{
		ch_dest[i] = ch_src[i];
		i++;
	}
//	ch_dest[i] = '\0';
	return ((void*)ch_dest);
}

#include <stdio.h>
#include <string.h>

int main()
{
   const char src[50] = "http://www.tutorialspoint.com";
   char dest[50];
   strcpy(dest,"Heloooo!!aaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
   printf("Before memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
   return (0);

}
