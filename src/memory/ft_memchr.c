/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraf <jgraf@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:14:06 by jgraf             #+#    #+#             */
/*   Updated: 2024/10/15 17:14:11 by jgraf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Locates the first occurrence of c (converted to an unsigned char) in the first n bytes of str

void	*ft_memchr(const void *str, int c, int n)
{
	int				i;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char *)str;
	while (i < n)
	{
		if (tmp[i] == (unsigned char)c)
			return ((void *)(tmp + i));
		i ++;
	}
	return (NULL);
}
