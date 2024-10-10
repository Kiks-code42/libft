/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: killianmolliex <killianmolliex@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:57:52 by killianmoll       #+#    #+#             */
/*   Updated: 2024/10/07 13:33:34 by killianmoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

// int main()
// {
// 	char ch1;
// 	char ch2;
// 	int ch3;

// 	ch1 = '2';
// 	ch2 = '9';
// 	ch3 = 200;

// 	if(ft_isascii(ch1))
//         printf("%c est un caractere ascii.\n", ch1);
//     else
//         printf("%c n'est pas un caractere ascii. \n",ch1);
//     if(ft_isascii(ch2))
//         printf("%c est un caractere ascii.\n", ch2);
//     else
//         printf("%c n'est pas un caractere ascii. \n",ch2);
//     if(ft_isascii(ch3))
//         printf("%c est un caractere ascii.\n", ch3);
//     else
//         printf("%d n'est pas un caractere ascii. \n",ch3);
//     return(0);
// }