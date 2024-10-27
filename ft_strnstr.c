/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: killianmolliex <killianmolliex@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:28:48 by killianmoll       #+#    #+#             */
/*   Updated: 2024/10/17 14:51:28 by killianmoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *zone, const char *cible, size_t len)
{
	size_t	i;
	size_t	j;

	if (cible[0] == '\0')
		return ((char *)zone);
	i = 0;
	while ((zone[i] && i < len))
	{
		j = 0;
		while ((cible[j] == zone[i + j] && (i + j) < len))
		{
			if (cible[j + 1] == '\0')
				return (&((char *)zone)[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
