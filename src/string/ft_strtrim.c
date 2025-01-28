/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraf <jgraf@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 11:19:47 by jgraf             #+#    #+#             */
/*   Updated: 2024/10/15 08:45:19 by jgraf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Trims leading and trailing characters specified in set from the string s1
*	Returns a pointer to the new string
*/

static int	chr_is_contained(const char	*set, char chr)
{
	int	i;

	i = 0;
	while (set[i] != 0)
	{
		if (set[i] == chr)
			return (1);
		i ++;
	}
	return (0);
}

static int	is_at_least_one(int n)
{
	if (n < 1)
		return (1);
	return (n);
}

char	*ft_strtrim(const char	*s1, const char	*set)
{
	void	*ptr;
	int		i;
	int		first;
	int		last;

	i = 0;
	first = 0;
	last = ft_strlen(s1);
	while (s1[first] != 0 && chr_is_contained(set, s1[first]))
		first ++;
	while (s1[i ++] != 0 && chr_is_contained(set, s1[last - 1]))
		last --;
	ptr = malloc(is_at_least_one(last - first + 1));
	i = first;
	if (ptr == NULL)
		return (NULL);
	while (i < last)
	{
		((char *)ptr)[i - first] = s1[i];
		i ++;
	}
	((char *)ptr)[i - first] = 0;
	return (ptr);
}
