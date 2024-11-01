/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: killianmolliex <killianmolliex@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:08:51 by killianmoll       #+#    #+#             */
/*   Updated: 2024/10/30 20:33:47 by killianmoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}

/*
int main(void)
{
	const char *str1;
	const char *str2;
	const char *str3;

	str1 = "-123";
	str2 = "    +123";
	str3 = "234";

	printf("Conversion de '%s' en entier : %d\n", str1, ft_atoi(str1));
	printf("Conversion de '%s' en entier : %d\n", str2, ft_atoi(str2));
	printf("Conversion de '%s' en entier : %d\n", str3, ft_atoi(str3));
	return (0);
}
*/