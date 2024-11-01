/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: killianmolliex <killianmolliex@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:19:49 by kmolliex          #+#    #+#             */
/*   Updated: 2024/10/30 20:58:21 by killianmoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}

/*
int main(void)
{
	char zone[10];
	int i;

	i = 0;

	// Appel de ft_memset pour remplir le buffer avec le caractère 'A'
	ft_memset(zone, 'A', sizeof(zone));

	// Affiche chaque élément du buffer pour vérifier le résultat
	printf("Contenu du buffer après ft_memset : ");
	while (i < 10)
	{
		printf("%c ", zone[i]);
		i++;
	}
	printf("\n");

	return 0;
}
*/