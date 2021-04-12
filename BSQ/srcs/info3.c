/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyun <gyun@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:38:08 by gyun              #+#    #+#             */
/*   Updated: 2021/04/12 17:01:45 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int			is_valid_first_line(t_info *info, char *str)
{
	int		count;

	count = 0;
	while (*str != '\n' && *str != 0)
	{
		if (!(*str == info->empty || *str == info->obstacle ||
					*str == info->full))
			return (-1);
		str++;
		count++;
	}
	info->row = count;
	if (*str)
		count++;
	else
		return (-1);
	return (count);
}

int			is_valid_map(t_info *info, char *str)
{
	int		col;
	int		comp;

	if ((col = is_valid_first_line(info, str)) < 1)
	{
		printf("CORE.C\n");
		return (-1);
	}
	str += col;
	while (*str)
	{
		comp = 0;
		while (*str != '\n' && *str != 0)
		{
			if (!(*str == info->empty || *str == info->obstacle ||
						*str == info->full))
				return (-1);
			str++;
			comp++;
		}
		if (comp != col)
			return (-1);
		str++;
	}
	if (*(--str) != '\n')
		return (-1);
	return (1);
}
