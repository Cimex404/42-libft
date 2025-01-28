/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraf <jgraf@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 08:46:17 by jgraf             #+#    #+#             */
/*   Updated: 2024/10/15 10:28:41 by jgraf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Copies up to len characters from src to dest, ensuring the result is not longer than len

int	ft_strlcpy(char	*dest, const char *src, int len)
{
	int	i;

	i = 0;
	if (len > 0)
	{
		while (src[i] != 0 && i < (len - 1))
		{
			dest[i] = src[i];
			i ++;
		}
		dest[i] = '\0';
	}
	while (src[i] != '\0')
		i ++;
	return (i);
}
