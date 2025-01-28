/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraf <jgraf@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:34:17 by jgraf             #+#    #+#             */
/*   Updated: 2024/10/15 10:30:50 by jgraf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Sets the first n bytes of the memory area pointed to by dst to 0

void	*ft_bzero(void *dst, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = 0;
		i ++;
	}
	return (dst);
}
