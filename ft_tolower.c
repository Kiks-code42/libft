/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: killianmolliex <killianmolliex@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:04:38 by killianmoll       #+#    #+#             */
/*   Updated: 2024/10/14 14:39:03 by killianmoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
/*
int main()
{
	int i = 'h';
	int j = 'K';

	printf("Si i est une majuscule il doit devenir %c\n",ft_tolower (i));
	printf("Si j est une majuscule il doit devenir %c\n",ft_tolower (j));
}
*/