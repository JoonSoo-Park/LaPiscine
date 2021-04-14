/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 12:16:33 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/14 20:45:36 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_info.h"
#include <limits.h>

int			func(int **map, int y, int x)
{
	const int		dy[3] = {-1, -1, 0};
	const int		dx[3] = {-1, 0, -1};
	int				idx;
	int				cur_min;
	int				cur_val;

	idx = 0;
	if (map[y][x] > 0)
	{
		cur_min = INT_MAX;
		idx = 0;
		while (idx < 3)
		{
			if (y + dy[idx] < 0 || x + dx[idx] < 0)
				return (map[y][x]);
			cur_val = map[y + dy[idx]][x + dx[idx]];
			cur_min = cur_val < cur_min ? cur_val : cur_min;
			++idx;
		}
		map[y][x] = cur_min + 1;
	}
	return (map[y][x]);
}

void		solution(int **map, t_info *map_info, t_point *point)
{
	int		i;
	int		j;
	int		max_val;
	int		val;

	i = 0;
	max_val = 0;
	while (i < map_info->col)
	{
		j = 0;
		while (j < map_info->row)
		{
			val = func(map, i, j);
			if (val > max_val)
			{
				max_val = val;
				point->y = i;
				point->x = j;
				point->val = max_val;
			}
			++j;
		}
		++i;
	}
}

void		make_result(char **map, t_info *map_info, t_point *point)
{
	int		y;
	int		x;

	y = 0;
	while (y < point->val)
	{
		x = 0;
		while (x < point->val)
		{
			map[point->y - y][point->x - x] = map_info->full;
			++x;
		}
		++y;
	}
}
