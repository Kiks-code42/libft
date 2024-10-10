/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: killianmolliex <killianmolliex@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:27:42 by killianmoll       #+#    #+#             */
/*   Updated: 2024/10/07 13:33:31 by killianmoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

// int main()
// {
//     char ch1;
//     char ch2;
//     char ch3;
//     ch1 = '1';
//     ch2 = 'e';
//     ch3 =  '^';

//     if(ft_isdigit(ch1))
//         printf("%c est un nombre.\n", ch1);
//     else
//         printf("%c n'est pas un nombre. \n",ch1);
//     if(ft_isdigit(ch2))
//         printf("%c est un nombre.\n", ch2);
//     else
//         printf("%c n'est pas un nombre. \n",ch2);
//     if(ft_isdigit(ch3))
//         printf("%c est un nombre.\n", ch3);
//     else
//         printf("%c n'est pas un nombre. \n",ch3);
//     return(0);
// }