/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraf <jgraf@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 08:08:22 by jgraf             #+#    #+#             */
/*   Updated: 2024/10/21 10:07:29 by jgraf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*	This function is at the heart of all convertions, when a % is encountered,
*	this function is called and will check the given char to call the correct
*	function for the conversion.
*/

static int	handle_type(char type, va_list args)
{
	if (type == 'i' || type == 'd')
		return (con_digit(va_arg(args, int), "0123456789"));
	else if (type == 'c')
		return (print_char(va_arg(args, int)));
	else if (type == 's')
		return (print_str(va_arg(args, char *)));
	else if (type == 'p')
		return (con_ptr(va_arg(args, unsigned long long)));
	else if (type == 'u')
		return (con_uint(va_arg(args, unsigned int), "0123456789"));
	else if (type == 'x')
		return (con_hex(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (type == 'X')
		return (con_hex(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (type == '%')
		return (print_char('%'));
	return (0);
}


/*	This is what you would call the "main" of the program. This function cycles through
*	the input string and prints all characters as long as no % is encountered, if there is
*	a %, the function will enter the conversion function as seen above.
*/

void	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;

	va_start(args, str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
			i += handle_type(str[i + 1], args);
		else
			print_char(str[i]);
		i ++;
	}
	va_end(args);
}
