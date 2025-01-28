/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraf <jgraf@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:26:17 by jgraf             #+#    #+#             */
/*   Updated: 2024/10/11 16:15:03 by jgraf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Locates the last occurrence of c (converted to a char) in the string str

char	*ft_strrchr(const char *str, unsigned char c)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i ++;
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char *)(str + i));
		i --;
	}
	return (NULL);
}
