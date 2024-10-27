/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: killianmolliex <killianmolliex@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:16:17 by killianmoll       #+#    #+#             */
/*   Updated: 2024/10/14 17:47:20 by killianmoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (((char)c) == '\0')
		return ((char *)(s + i));
	return (NULL);
}

/*
int main(void)
{
    const char *str = "Hello, world!";
    char ch = 'w';
    char *result;

    result = ft_strchr(str, ch);
    if (result)
        printf("Le caractère '%c' a été trouvé à la position : %ld\n",\
		 ch, result - str);
    else
        printf("Le caractère '%c' n'a pas été trouvé dans la chaîne.\n", ch);

    return 0;
}
*/
