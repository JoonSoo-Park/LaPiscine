/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:48:34 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/12 16:51:26 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "map_info.h"

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
}
