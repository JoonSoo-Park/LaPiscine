/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:48:34 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/14 20:09:25 by gyun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_info.h"
#include <stdlib.h>

void	free_str(char *str)
{
	free(str);
}

void	map_free(char **map, t_info *info, int index)
{
	int idx;

	free(info->str);
	idx = 0;
	while (idx < index)
	{
		if (map[idx] != 0)
			free(map[idx]);
		++idx;
	}
	free(map);
}

void	sol_free(char **map, int **imap, t_info *info, int index)
{
	int idx;

	free(info->str);
	idx = 0;
	while (idx < info->col)
		free(map[idx++]);
	free(map);
	idx = 0;
	while (idx < index)
		free(imap[idx++]);
	free(imap);
}

void	free_everything(char **map, int **imap, t_info *info)
{
	int		idx;

	idx = 0;
	while (idx < info->col)
	{
		free(map[idx]);
		free(imap[idx]);
		++idx;
	}
	free(map);
	free(imap);
	free(info->str);
}
