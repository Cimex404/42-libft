/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraf <jgraf@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:16:20 by jgraf             #+#    #+#             */
/*   Updated: 2025/02/24 08:30:35 by jgraf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


/*	These functions are used to append the content of the buffer to the line.
*	Essentially, a new buffer is created, the content of the old buffer is copied
*	into the new buffer and the new content is appended to the new buffer.
*	Finally, the old buffer is freed.
*/

void	free_line(char *line)
{
	if (line != NULL)
		free(line);
}

static int	ft_strlen(char *line)
{
	int	i;

	i = 0;
	while (line[i] != '\0')
		i++;
	return (i);
}

static int	len_to_lb(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i] != '\0')
	{
		if (buffer[i] == '\n')
			return (i + 1);
		i ++;
	}
	return (i);
}

char	*append(char *line, char *buffer, int bytes)
{
	int		i;
	int		l;
	char	*new_line;

	i = 0;
	l = 0;
	new_line = (char *)malloc(ft_strlen(line) + len_to_lb(buffer) + 1);
	if (new_line == NULL)
		return (free_line(line), NULL);
	while (line[i] != '\0')
	{
		new_line[i] = line[i];
		if (line[i ++] == '\n')
			break ;
	}
	while (l < bytes && buffer[l] != '\0')
	{
		new_line[i ++] = buffer[l ++];
		if (buffer[l - 1] == '\n')
			break ;
	}
	new_line[i] = '\0';
	free_line(line);
	return (new_line);
}
