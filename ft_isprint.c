/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: killianmolliex <killianmolliex@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:34:55 by killianmoll       #+#    #+#             */
/*   Updated: 2024/10/07 13:55:31 by killianmoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

// int main()
// {
// 	char ch1;
// 	char ch2;
// 	char ch3;

// 	ch1 = 't';
// 	ch2 = ' ';
// 	ch3 = '\n';
//  if(ft_isprint(ch1))
//          printf("%c est un charatere imprimable.\n", ch1);
//     else
//          printf("%c n'est pas un charactere imprimable. \n",ch1);
//      if(ft_isprint(ch2))
//          printf("%c est un charactere imprimable.\n", ch2);
//      else
//          printf("%c n'est pas un charactere imprimable. \n",ch2);
//      if(ft_isprint(ch3))
//          printf("%c est un caractere imprimable.\n", ch3);
//      else
//          printf("%c n'est pas un charactere imprimable. \n",ch3);
//      return(0);

// }
