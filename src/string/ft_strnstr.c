/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraf <jgraf@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:26:02 by jgraf             #+#    #+#             */
/*   Updated: 2024/10/15 10:28:24 by jgraf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Locates the first occurrence of the null-terminated string s2 in the string s1,
*	where not more than n characters are searched
*/

char	*ft_strnstr(const char *s1, const char *s2, int n)
{
	int	i;
	int	j;

	i = 0;
	if (s2[i] == 0)
		return ((char *) s1);
	while (s1[i] != 0 && i < n)
	{
		j = 0;
		while (s1[i + j] == s2[j] && (i + j) < n)
		{
			if (s2[j + 1] == 0)
				return ((char *)(s1 + i));
			j ++;
		}
		i ++;
	}
	return (0);
}
