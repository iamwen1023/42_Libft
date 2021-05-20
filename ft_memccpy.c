/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 14:30:02 by wlo               #+#    #+#             */
/*   Updated: 2021/05/20 15:10:13 by wlo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	check_c(const unsigned char *src, int c)
{
	while (*src)
	{
		if(*src == c)
			return (1);
		src++;
	}
	return (0);
}

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char 		*ch_dest;
	const unsigned char *ch_src;
	size_t				i;

	ch_src = src;
	if (check_c(ch_src, c) == 0)
		return (NULL);
	ch_dest = dest;
	i = 0;
	while (i < n && ch_src[i] != c)
	{
		ch_dest[i] = ch_src[i];
		i++;	
	}
	ch_dest[i] = ch_src[i];
	return ((void*)ch_dest);
}

//do we need to add '\0' at the end of sentence?
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

    const char * text = "Ceci est ma première phrase. Et ceci est ma seconde";
    size_t length = strlen( text );

    // On essaye de trouver la première phrase dans le texte.
    char firstSentence[ length ];
    char * res = ft_memccpy( firstSentence, text, '!', length );

    // On affiche le resultat.
    if ( res != NULL ) {
        printf( "Une phrase entière a été trouvée.\n" );
        printf( "\t%s\n", firstSentence );
    } else {
        printf( "Aucune phrase entière trouvée.\n" );
    }

    return EXIT_SUCCESS;
}

