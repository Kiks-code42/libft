/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: killianmolliex <killianmolliex@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:43:45 by killianmoll       #+#    #+#             */
/*   Updated: 2024/10/21 16:08:47 by killianmoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

/*
int main()
{
	int i = 'L';
	int j = 'k';

	printf("L ne doit pas changer %c\n", ft_toupper(i));
	printf("k doit changer en majuscule %c\n", ft_toupper(j));
}
*/