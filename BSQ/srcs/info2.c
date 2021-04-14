/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyun <gyun@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 13:22:50 by gyun              #+#    #+#             */
/*   Updated: 2021/04/14 23:29:04 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "ft_free.h"

char				*get_first_line_sub(t_info *map, char *str)
{
	while (*str != '\0' && !is_printable(*str))
		str++;
	map->empty = *str++;
	while (*str != '\0' && !is_printable(*str))
		str++;
	map->obstacle = *str++;
	while (*str != '\0' && !is_printable(*str))
		str++;
	map->full = *str++;
	return (str);
}

char				*get_first_line(t_info *map, char *str)
{
	int				result;

	result = 0;
	while (*str == '\f' || *str == '\n' || *str == '\r' ||
			*str == '\v' || *str == '\t' || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
		str++;
	while ((*str >= '0' && *str <= '9') && (*str != 0))
	{
		result = result * 10;
		result = result + *str - '0';
		str++;
	}
	map->col = result;
	str = get_first_line_sub(map, str);
	if (*str == '\n')
		return (++str);
	else
		return (0);
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
		if (!(array[index] = ft_strdup(ckp, str - ckp)))
		{
			map_free(array, info, index);
			return (0);
		}
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

int					**get_sol_from_str(char **mmap, t_info *map, char *str)
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
		if (!(array[index] = intdup(map, ckp, str - ckp)))
		{
			sol_free(mmap, array, map, index);
			return (0);
		}
		map->row = str - ckp;
		index++;
	}
	return (array);
}
