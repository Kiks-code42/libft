/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: killianmolliex <killianmolliex@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:33:28 by killianmoll       #+#    #+#             */
/*   Updated: 2024/10/09 21:24:29 by killianmoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t destsize)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	if (destsize < ft_strlen(dest))
		return (ft_strlen(src) + destsize);
	else
		len = ft_strlen(src) + ft_strlen(dest);
	while (dest[i])
		i++;
	while (src[j] && i + 1 < destsize)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len);
}
