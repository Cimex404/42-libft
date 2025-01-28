/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraf <jgraf@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:15:01 by jgraf             #+#    #+#             */
/*   Updated: 2024/10/15 17:15:04 by jgraf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Sets the first n bytes of the memory area pointed to by str to the specified value
*	Returns a pointer to the memory area str
*/

void	*ft_memset(void	*str, int c, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		((char *)str)[i] = (unsigned char)c;
		i ++;
	}
	return (str);
}
