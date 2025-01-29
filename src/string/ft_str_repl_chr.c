/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_repl_chr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraf <jgraf@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 11:00:14 by jgraf             #+#    #+#             */
/*   Updated: 2025/01/29 11:00:18 by jgraf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Replaces all occurrences of old_char with new_char in the string str

char	*ft_str_repl_chr(char *str, char old_char, char new_char)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == old_char)
			str[i] = new_char;
		i ++;
	}
	return (str);
}
