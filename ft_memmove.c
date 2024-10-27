/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: killianmolliex <killianmolliex@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:20:16 by kmolliex          #+#    #+#             */
/*   Updated: 2024/10/17 13:45:43 by killianmoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t len)
{
	size_t	n;

	n = 0;
	if (!dest && !src && len > 0)
		return (NULL);
	if (src < dest)
	{
		n = len;
		while (n > 0)
		{
			n--;
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
		}
	}
	else
	{
		n = 0;
		while (n < len)
		{
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
			n++;
		}
	}
	return (dest);
}
