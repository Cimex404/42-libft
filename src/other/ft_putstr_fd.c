/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraf <jgraf@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 09:48:35 by jgraf             #+#    #+#             */
/*   Updated: 2024/10/15 08:42:20 by jgraf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Writes the string s to the file descriptor fd

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
