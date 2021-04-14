/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyun <gyun@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:38:08 by gyun              #+#    #+#             */
/*   Updated: 2021/04/14 20:05:25 by gyun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			is_valid_first_line(t_info *info, char *str)
{
	int		count;

	count = 0;
	while (*str != '\n' && *str != 0)
	{
		if (!(*str == info->empty || *str == info->obstacle))
			return (-1);
		str++;
		count++;
	}
	info->row = count;
	if (!*str)
		return (-1);
	return (count);
}

int			is_valid_map(t_info *info, char *str)
{
	int		row;
	int		comp;

	if ((row = is_valid_first_line(info, str)) < 1)
		return (-1);
	str += row + 1;
	while (*str)
	{
		comp = 0;
		while (*str != '\n' && *str != 0)
		{
			if (!(*str == info->empty || *str == info->obstacle))
				return (-1);
			str++;
			comp++;
		}
		if (comp != row)
			return (-1);
		str++;
	}
	if (*(--str) != '\n')
		return (-1);
	return (1);
}

int			is_valid_map2(t_info *info, char *str)
{
	int		col;
	int		comp;

	col = info->col;
	comp = 0;
	while (*str)
	{
		while (*str != '\n' && *str != 0)
			str++;
		comp++;
		if (*str == '\n')
			str++;
		else if (*str == 0)
			break ;
	}
	if (col != comp)
		return (-1);
	return (1);
}

int			is_printable(char c)
{
	if (c <= 126 && c >= 32)
		return (1);
	else
		return (0);
}

int			check_block(t_info *info)
{
	if (info->empty == info->obstacle ||
			info->empty == info->full ||
			info->obstacle == info->full)
		return (0);
	else
		return (1);
}
