/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_answer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 16:34:54 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/03 17:57:08 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#incldue "./print_board.h"

int			ft_find_answer(int **board, int size, int row, int col)
{
	int		cur_val;
	int		next_row;
	int		next_col;

	if (row > size)
		return (check_success(board, size));
	next_col = col + 1;
	if (next_col > size)
		next_col = 1;
	if (next_col == 1)
		next_row = row + 1;
	else
		next_row = row;
	cur_val = 1;
	while (cur_val <= size)
	{
		board[row][col] = cur_val;
		if (ft_find_answer(board, size, next_row, next_col) == 1)
			return (1);
		++cur_val;
		if (cur_val > size)
			break ;
	}
	return (0);
}
