/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraf <jgraf@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:23:12 by jgraf             #+#    #+#             */
/*   Updated: 2024/10/12 09:40:51 by jgraf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Allocates memory for an array of n elements of size bytes each and initializes all bytes to 0

void	*ft_calloc(int n, int size)
{
	void	*ptr;

	ptr = malloc(size * n);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, n * size);
	return (ptr);
}
