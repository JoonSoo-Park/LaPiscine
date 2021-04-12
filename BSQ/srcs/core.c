/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyun <gyun@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:46:03 by gyun              #+#    #+#             */
/*   Updated: 2021/04/12 18:33:38 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "solution.h"
#include "map_info.h"
#include "ft.h"

void				print(char **map, t_info *info)
{
	int		i;
	int		j;

	i = 0;
	while (i < info->col)
	{
		j = 0;
		while (j < info->row)
		{
			write(1, &map[i][j], 1);
			++j;
		}
		++i;
		write(1, "\n", 1);
	}
}

void				core(char *fn)
{
	t_info			info;
	char			**map;
	int				**sol;
	char			*str;
	t_point			point;

	str = file_to_str(fn, count_file_size(fn));
	str = get_first_line(&info, str);
	/*
	if (is_valid_map(&info, str) == -1)
		return ;
		*/
	map = get_map_from_str(&info, str);
	sol = get_sol_from_str(&info, str);
	solution(sol, &info, &point);
	make_result(map, &info, &point);
	print(map, &info);
}
