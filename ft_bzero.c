/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: killianmolliex <killianmolliex@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:53:09 by kmolliex          #+#    #+#             */
/*   Updated: 2024/10/30 21:30:00 by killianmoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
int main(void)
{
	char str[] = "Killian"; // Utilisation d'un tableau modifiable

	// Affichage de str avant le passage dans ft_bzero
	printf("Avant ft_bzero: %s\n", str);

	// Appel de ft_bzero pour mettre les octets de str à zéro
	ft_bzero(str, 8);

	// Affichage de str après le passage dans ft_bzero
	printf("Après ft_bzero: %s\n", str);

	return 0;
}
*/