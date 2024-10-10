/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: killianmolliex <killianmolliex@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:52:18 by killianmoll       #+#    #+#             */
/*   Updated: 2024/10/07 13:33:35 by killianmoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

// int main()
//
//     char ch1;
//     char ch2;
//     char ch3;

//     ch1 = 'a';
//     ch2 = 'R';
//     ch3 = '3';

//     if(ft_isalpha(ch1))
//         printf("%c est une lettre alphabétique.\n", ch1);
//     else
//         printf("%c n'est pas une lettre alphabétique.\n", ch1);
//     if(ft_isalpha(ch2))
//         printf("%c est une lettre alphabétique.\n", ch2);
//     else
//         printf("%c n'est pas une lettre alphabétique.\n", ch2);
//     if(ft_isalpha(ch3))
//         printf("%c est une lettre alphabétique.\n", ch3);
//     else
//         printf("%c n'est pas une lettre alphabétique.\n", ch3);
//     return(0);    
// }