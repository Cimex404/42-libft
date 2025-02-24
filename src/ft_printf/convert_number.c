/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_number.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraf <jgraf@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 08:19:57 by jgraf             #+#    #+#             */
/*   Updated: 2024/10/18 13:45:41 by jgraf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


/*	These three functions take a number and a base for conversion, the main difference
*	is just the limit (integer, long, unsigned) that they allow. All of them use the
*	same groud logic to convert a number into an integer.
*/

int	con_digit(int n, char *base)
{
	long	nmb;

	nmb = n;
	if (nmb < 0)
	{
		print_char('-');
		nmb = -nmb;
	}
	if (nmb >= 10)
		con_digit(nmb / 10, base);
	print_char(base[nmb % 10]);
	return (1);
}

int	con_uint(unsigned int nmb, char *base)
{
	if (nmb >= 10)
		con_uint(nmb / 10, base);
	print_char(base[nmb % 10]);
	return (1);
}

int	con_hex(unsigned int n, char *base)
{
	unsigned long	nmb;

	nmb = n;
	if (nmb >= 16)
		con_hex(nmb / 16, base);
	print_char(base[nmb % 16]);
	return (1);
}
