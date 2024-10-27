/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: killianmolliex <killianmolliex@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:10:51 by killianmoll       #+#    #+#             */
/*   Updated: 2024/10/14 16:23:47 by killianmoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

/*
int main()
{
	char str1[] = "Killian";
	char str2[] = "Killian";
	char str3[] = "Killina";
	char str4[] = "Kiall";

	printf("T1 compare str1 a str2 attendu 0%d\n", ft_memcmp(str1, str2, 7));
	printf("T2 compare str1 a str3 attendu -13 %d\n", ft_memcmp(str1, str3, 7));
	printf("T3 compare str1 a str4 attendu 11 %d\n", ft_memcmp(str1, str4, 4));
}
*/
