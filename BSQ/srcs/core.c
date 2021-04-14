/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyun <gyun@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:46:03 by gyun              #+#    #+#             */
/*   Updated: 2021/04/14 21:49:44 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solution.h"
#include "map_info.h"
#include "utilities.h"
#include "ft.h"
#include "ft_free.h"

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

char				*haha(t_info *info, char *str)
{
	if (!(str = get_first_line(info, str)))
	{
		free(info->str);
		ft_putstr("map error\n");
		return (0);
	}
	if (!check_block(info))
	{
		free(info->str);
		ft_putstr("map error\n");
		return (0);
	}
	if (is_valid_map(info, str) == -1)
	{
		free(info->str);
		ft_putstr("map error\n");
		return (0);
	}
	if (is_valid_map2(info, str) == -1)
	{
		free(info->str);
		ft_putstr("map error\n");
		return (0);
	}
	return (str);
}

void				get_solution(char **map, int **sol,
		t_info *info, t_point *point)
{
	solution(sol, info, point);
	make_result(map, info, point);
	print(map, info);
	free_everything(map, sol, info);
}

void				core(char *fn)
{
	t_info			info;
	char			**map;
	int				**sol;
	char			*str;
	t_point			point;

	if (!(str = file_to_str(fn, count_file_size(fn))))
	{
		ft_putstr("map error\n");
		return ;
	}
	info.str = str;
	if (!(str = haha(&info, str)))
		return ;
	if (!((map = get_map_from_str(&info, str)) &&
				(sol = get_sol_from_str(map, &info, str))))
	{
		ft_putstr("map error\n");
		return ;
	}
	get_solution(map, sol, &info, &point);
}
