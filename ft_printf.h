/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:26:24 by mbarra            #+#    #+#             */
/*   Updated: 2021/10/31 14:02:00 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

size_t	ft_hexlen(unsigned int n);
size_t	ft_hexlenp(unsigned long int n);
size_t	ft_intlen(long long int n);
size_t	ft_print_c(int c);
size_t	ft_print_id(int n);
size_t	ft_print_p(unsigned long int n);
size_t	ft_print_s(char *s);
size_t	ft_print_ud(unsigned int n);
size_t	ft_print_ux(unsigned int n);
size_t	ft_print_x(unsigned int n);
int		ft_printf(const char	*format, ...);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbruns_fd(unsigned int n, int fd);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *str);

#endif
