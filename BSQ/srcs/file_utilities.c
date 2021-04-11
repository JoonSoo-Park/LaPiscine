/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_utilities.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 22:18:31 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/11 15:24:20 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "utilities.h"
#include "ft_atoi.h"

int		read_first_line(int fd, char *empty, char *obst, char *full)
{
	char	buffer[100];
	char	*temp;
	int		idx;
	int		ret;

	idx = 0;
	while (1)
	{
		read(fd, &buffer[idx], 1);
		if (buffer[idx] == '\n')
			break ;
		++idx;
	}
	if (idx < 4)
		return (-1);
	*full = buffer[--idx];
	*obst = buffer[--idx];
	*empty = buffer[--idx];
	temp = ft_strndup(buffer, idx);
	ret = ft_atoi(temp);
	if (ret == 0)
		return (-1);
	free(temp);
	return (ret);
}

int		read_file(char *file_name, char *empty, char *obst, char *full)
{
	int		fd;
	int		lines;

	if ((fd = open(file_name, O_RDONLY)) < 0)
		return (-1);
	if ((lines = read_first_line(fd, empty, obst, full)) < 0)
		return (-1);
	close(fd);
	return (lines);
}
