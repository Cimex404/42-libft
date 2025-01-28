/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraf <jgraf@student.42heilbonn.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 08:59:06 by jgraf             #+#    #+#             */
/*   Updated: 2024/10/15 10:29:54 by jgraf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Compares the first n bytes of the memory areas s1 and s2 and returns
*	the difference between the first two differing bytes
*/

int	ft_memcmp(const void *s1, const void *s2, int n)
{
	unsigned char	*t1;
	unsigned char	*t2;
	int				i;

	t1 = (unsigned char *)s1;
	t2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (t1[i] != t2[i])
			return ((int)(t1[i] - t2[i]));
		i ++;
	}
	return (0);
}
