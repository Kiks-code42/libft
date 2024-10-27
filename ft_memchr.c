/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: killianmolliex <killianmolliex@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:26:43 by killianmoll       #+#    #+#             */
/*   Updated: 2024/10/14 17:02:20 by killianmoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == ((unsigned char)c))
			return ((unsigned char *)s + i);
		i++;
	}
	return (0);
}

/*
void test_ft_memchr() 
{
    char str1[] = "Hello, World!";
    char str2[] = "Sample string";
    char str3[] = "Find me if you can";
    char ch = 'o';
    char not_found = 'z';

    // Test 1: Caractère présent
    char *result1 = ft_memchr(str1, ch, sizeof(str1));
    if (result1) 
        printf("Test 1: '%c' trouvé à l'index %ld dans \"%s\"\n"\
		, ch, result1 - str1, str1); 
	else 
        printf("Test 1: '%c' non trouvé dans \"%s\"\n", ch, str1);

    // Test 2: Caractère non présent
    char *result2 = ft_memchr(str1, not_found, sizeof(str1));
    if (result2) 
        printf("Test 2: '%c' trouvé à l'index %ld dans \"%s\"\n"\
		, not_found, result2 - str1, str1); 
	else 
        printf("Test 2: '%c' non trouvé dans \"%s\"\n", not_found, str1);
    // Test 3: Caractère présent au début
    char *result3 = ft_memchr(str2, 'S', sizeof(str2));
    if (result3) 
        printf("Test 3: '%c' trouvé à l'index %ld dans \"%s\"\n"\
		, 'S', result3 - str2, str2);
	else 
        printf("Test 3: '%c' non trouvé dans \"%s\"\n", 'S', str2);
    // Test 4: Caractère présent à la fin
    char *result4 = ft_memchr(str3, 'n', sizeof(str3));
    if (result4) 
	{
        printf("Test 4: '%c' trouvé à l'index %ld dans \"%s\"\n"\
		, 'n', result4 - str3, str3);
    } 
	else 
	{
        printf("Test 4: '%c' non trouvé dans \"%s\"\n", 'n', str3);
    }
}

int main() 
{
    test_ft_memchr();
    return 0;
}
*/