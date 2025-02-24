/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraf <jgraf@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:09:50 by jgraf             #+#    #+#             */
/*   Updated: 2024/10/18 13:47:17 by jgraf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

void	ft_printf(const char *str, ...);
int 	con_digit(int n, char *base);
int		con_hex(unsigned int n, char *base);
int		print_char(int c);
int		print_str(char	*s);
int		con_ptr(unsigned long long ptr);
int		con_uint(unsigned int nmb, char *base);

#endif
