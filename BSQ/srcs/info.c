/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyun <gyun@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 13:20:03 by gyun              #+#    #+#             */
/*   Updated: 2021/04/12 16:53:34 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft.h"
#include <fcntl.h>

char		*ft_strdup(char *str, int size)
{
	char	*tmp;
	int		index;

	tmp = (char *)malloc(sizeof(char) * (size + 1));
	index = 0;
	while (size)
	{
		tmp[index] = *str;
		index++;
		str++;
		size--;
	}
	tmp[index] = 0;
	return (tmp);
}

int			count_file_size(char *fn)
{
	int		fd;
	int		size;
	char	c;
	int		count;

	count = 0;
	fd = open(fn, O_RDONLY);
	size = read(fd, &c, 1);
	while (size)
	{
		count++;
		size = read(fd, &c, 1);
	}
	close(fd);
	return (count);
}

char		*file_to_str(char *fn, int count)
{
	char	*tmp;
	int		index;
	int		fd;
	char	c;

	if (!(tmp = (char *)malloc(sizeof(char) * count)))
		return (0);
	index = 0;
	fd = open(fn, O_RDONLY);
	while (index < count)
	{
		read(fd, &c, 1);
		tmp[index] = c;
		index++;
	}
	return (tmp);
}

int			count_n(char *str)
{
	int		count;

	count = 0;
	while (*str)
	{
		if (*str == '\n')
			count++;
		str++;
	}
	return (count);
}
