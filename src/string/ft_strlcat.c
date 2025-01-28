/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraf <jgraf@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 08:46:06 by jgraf             #+#    #+#             */
/*   Updated: 2024/10/15 10:29:02 by jgraf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Appends the string src to the string dest, ensuring the result is not longer than len

int	ft_strlcat(char	*dest, const char *src, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
		i ++;
	if (i >= len)
	{
		while (src[j] != 0)
			j ++;
		return (len + j);
	}
	while (j < (len - i - 1) && src[j] != 0)
	{
		dest[i + j] = src[j];
		j ++;
	}
	dest[i + j] = 0;
	while (src[j] != 0)
		j ++;
	return (i + j);
}
