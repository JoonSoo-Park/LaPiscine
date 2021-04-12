/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyun <gyun@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 13:22:50 by gyun              #+#    #+#             */
/*   Updated: 2021/04/12 18:34:13 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft.h"

char				*get_first_line(t_info *map, char *str)
{
	int				result;

	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10;
		result = result + *str - '0';
		str++;
	}
	map->col = result;
	map->empty = *str++;
	map->obstacle = *str++;
	map->full = *str++;
	return (++str);
}

char				**get_map_from_str(t_info *info, char *str)
{
	char			*ckp;
	int				index;
	char			**array;
	int				count;

	count = info->col;
	if (!(array = (char **)malloc(sizeof(char *) * (count + 1))))
		return (0);
	index = 0;
	while (index < count)
	{
		while (*str == '\n')
			str++;
		ckp = str;
		while (*str != '\n')
			str++;
		array[index] = ft_strdup(ckp, str - ckp);
		index++;
	}
	array[index] = 0;
	return (array);
}

int					*intdup(t_info *map, char *str, int size)
{
	int				*tmp;
	int				index;

	index = 0;
	if (!(tmp = (int *)malloc(sizeof(int) * size)))
		return (0);
	while (size)
	{
		if (*str == map->empty)
			tmp[index] = 1;
		else if (*str == map->obstacle)
			tmp[index] = 0;
		size--;
		index++;
		str++;
	}
	return (tmp);
}

int					**get_sol_from_str(t_info *map, char *str)
{
	int				**array;
	int				count;
	int				index;
	char			*ckp;

	count = count_n(str);
	if (!(array = (int **)malloc(sizeof(int *) * (count + 1))))
		return (0);
	index = 0;
	while (index < count)
	{
		while (*str == '\n')
			str++;
		ckp = str;
		while (*str != '\n')
			str++;
		array[index] = intdup(map, ckp, str - ckp);
		map->row = str - ckp;
		index++;
	}
	return (array);
}
