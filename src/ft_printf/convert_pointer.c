/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_pointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraf <jgraf@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:30:05 by jgraf             #+#    #+#             */
/*   Updated: 2024/10/18 13:46:11 by jgraf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


//	These two functions print out a pointer in hex format.

static void	print_ptr(unsigned long long nmb)
{
	char	*base;

	base = "0123456789abcdef";
	if (nmb >= 16)
		print_ptr(nmb / 16);
	print_char(base[nmb % 16]);
}

int	con_ptr(unsigned long long ptr)
{
	print_str("0x");
	print_ptr(ptr);
	return (1);
}
