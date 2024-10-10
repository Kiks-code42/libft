/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: killianmolliex <killianmolliex@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:47:36 by killianmoll       #+#    #+#             */
/*   Updated: 2024/10/09 21:33:46 by killianmoll      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

void	ft_putnbr_fd(int nb, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putchar_fd(char c, int fd);

size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, char *src, size_t destsize);
size_t	ft_strlcat(char *dest, char *src, size_t destsize);

#endif