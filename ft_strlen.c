/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: killianmolliex <killianmolliex@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:56:53 by killianmoll       #+#    #+#             */
/*   Updated: 2024/10/07 14:29:46 by killianmoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// int main()
// {
// 	const char* str1 = "Hello";
// 	const char* str2 = "Killian";
// 	const char* str3 = "";

// 	printf("Longueur de '%s' : %zu\n", str1, ft_strlen(str1));
// 	printf("Longueur de '%s' : %zu\n", str2, ft_strlen(str2));
// 	printf("Longueur de '%s' : %zu\n", str3, ft_strlen(str3));

// 	return (0);
// }