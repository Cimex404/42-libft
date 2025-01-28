/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraf <jgraf@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:12:29 by jgraf             #+#    #+#             */
/*   Updated: 2024/10/15 17:12:38 by jgraf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Returns true if the character is an ASCII character

bool	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (true);
	return (false);
}
