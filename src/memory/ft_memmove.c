/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraf <jgraf@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:14:44 by jgraf             #+#    #+#             */
/*   Updated: 2024/10/15 17:14:47 by jgraf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Copies n bytes from memory area src to memory area dest
*	Returns a pointer to dest
*/

static void	move(char *d, const char *s, int n)
{
	int	i;

	if (s < d && d < s + n)
	{
		i = n;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i --;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i ++;
		}
	}
}

void	*ft_memmove(void	*dest, const void *src, int n)
{
	char		*d;
	const char	*s;

	if (n == 0 || dest == src)
		return (dest);
	d = (char *)dest;
	s = (const char *)src;
	move(d, s, n);
	return (d);
}
