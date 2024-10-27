/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: killianmolliex <killianmolliex@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:39:01 by killianmoll       #+#    #+#             */
/*   Updated: 2024/10/27 19:39:29 by killianmoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nb(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		i++;
	while (nb)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nb)
{
	int		i;
	char	*str;
	long	n;

	n = nb;
	i = ft_nb(n);
	str = malloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	if (n == 0)
		str[0] = '0';
	str[i] = '\0';
	i--;
	while (n)
	{
		str[i] = n % 10 + '0';
		i--;
		n = n / 10;
	}
	return (str);
}
