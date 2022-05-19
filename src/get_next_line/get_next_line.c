/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awillems <awillems@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 09:55:20 by awillems          #+#    #+#             */
/*   Updated: 2022/01/04 09:07:19 by awillems         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	has_the_end(char *buffer)
{
	size_t	i;

	i = 0;
	while (i < BUFFER_SIZE)
	{
		if (buffer[i] == '\n' || buffer[i] == 0)
			return (i + 1);
		i++;
	}
	return (0);
}

static void	get_next_line_recursive(char *buffer, char **res, int fd)
{
	ssize_t	len;
	ssize_t	err;
	char	*n;

	err = read(fd, buffer, BUFFER_SIZE);
	len = has_the_end(buffer);
	if (err != BUFFER_SIZE)
		ft_memset(buffer + err, 0, BUFFER_SIZE - err);
	if (len != 0)
	{
		gnl_substr(&n, buffer, 0, len);
		gnl_strjoin(res, &n);
		ft_memmove(buffer, buffer + len, BUFFER_SIZE);
		ft_memset(buffer + BUFFER_SIZE - len, 0, len);
	}
	else
	{
		gnl_substr(&n, buffer, 0, BUFFER_SIZE);
		gnl_strjoin(res, &n);
		get_next_line_recursive(buffer, res, fd);
	}
}

static char	*emptygnl(char **res)
{
	free (*res);
	return (NULL);
}

/**
 * @brief Return the first line of file and
 * after a secund call will return the next, etc.
 * 
 * @param fd File descriptor of the file we want the line. (Has to be opened)
 * @return A string with the line in question.
 */
char	*get_next_line(int fd)
{
	static char	buff[NB_FD][BUFFER_SIZE];
	char		*res;
	char		*n;
	int			len;

	res = malloc(sizeof(char));
	if (!res || fd < 0)
		return (emptygnl(&res));
	res[0] = 0;
	if (ft_strlen(buff[fd]) != 0)
	{
		len = has_the_end(buff[fd]);
		gnl_substr(&n, buff[fd], 0, len);
		gnl_strjoin(&res, &n);
		ft_memmove(buff[fd], buff[fd] + len, BUFFER_SIZE);
		ft_memset(buff[fd] + BUFFER_SIZE - len, 0, len);
		if (res[ft_strlen(res) - 1] == 0 || res[ft_strlen(res) - 1] == '\n')
			return (res);
	}
	get_next_line_recursive(buff[fd], &res, fd);
	if (ft_strlen(res) != 0)
		return (res);
	return (emptygnl(&res));
}
