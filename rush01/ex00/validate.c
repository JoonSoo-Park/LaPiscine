/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 10:06:53 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/04 12:43:58 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./utils.h"

int		*g_board[4];
int		g_args[16];
int		g_idx;
int		g_offset;
int		g_cnt;
int		g_max_val;

int		validate_up(void)
{
	g_idx = 0;
	while (g_idx < 4)
	{
		g_offset = 0;
		g_cnt = 0;
		g_max_val = 0;
		while (g_offset < 4)
		{
			if (g_board[g_offset][g_idx] > g_max_val)
			{
				g_cnt++;
				g_max_val = g_board[g_offset][g_idx];
			}
			++g_offset;
		}
		if (g_args[g_idx] != g_cnt)
			return (0);
		++g_idx;
	}
	return (1);
}

int		validate_down(void)
{
	g_idx = 0;
	while (g_idx < 4)
	{
		g_offset = 3;
		g_cnt = 0;
		g_max_val = 0;
		while (g_offset >= 0)
		{
			if (g_board[g_offset][g_idx] > g_max_val)
			{
				g_cnt++;
				g_max_val = g_board[g_offset][g_idx];
			}
			--g_offset;
		}
		if (g_args[4 + g_idx] != g_cnt)
			return (0);
		++g_idx;
	}
	return (1);
}

int		validate_right(void)
{
	g_idx = 0;
	while (g_idx < 4)
	{
		g_offset = 3;
		g_cnt = 0;
		g_max_val = 0;
		while (g_offset >= 0)
		{
			if (g_board[g_idx][g_offset] > g_max_val)
			{
				g_cnt++;
				g_max_val = g_board[g_idx][g_offset];
			}
			--g_offset;
		}
		if (g_args[12 + g_idx] != g_cnt)
			return (0);
		++g_idx;
	}
	return (1);
}

int		validate_left(void)
{
	g_idx = 0;
	while (g_idx < 4)
	{
		g_offset = 0;
		g_cnt = 0;
		g_max_val = 0;
		while (g_offset < 4)
		{
			if (g_board[g_idx][g_offset] > g_max_val)
			{
				g_cnt++;
				g_max_val = g_board[g_idx][g_offset];
			}
			++g_offset;
		}
		if (g_args[8 + g_idx] != g_cnt)
			return (0);
		++g_idx;
	}
	return (1);
}
