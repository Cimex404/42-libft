/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putchar.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraf <jgraf@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 08:18:28 by jgraf             #+#    #+#             */
/*   Updated: 2024/10/18 13:43:50 by jgraf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


//	These two functions print all characters of a string of just a single character.


int	print_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int	print_str(char	*str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		print_str("(null)");
		return (1);
	}
	while (str[i] != '\0')
	{
		print_char(str[i]);
		i ++;
	}
	return (1);
}
