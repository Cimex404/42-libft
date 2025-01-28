/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraf <jgraf@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 11:01:55 by jgraf             #+#    #+#             */
/*   Updated: 2024/10/15 08:45:40 by jgraf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Creates a substring of the string s, starting at index start and of length len

char	*ft_substr(const char *s, int start, int len)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	j = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	tmp = malloc(len + 1);
	if (tmp == NULL)
		return (NULL);
	while (s[i] != 0 && len > 0)
	{
		if (i >= start)
		{
			tmp[j] = s[i];
			j ++;
			len --;
		}
		i ++;
	}
	tmp[j] = 0;
	return (tmp);
}
