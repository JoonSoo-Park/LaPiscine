/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_board.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 13:20:54 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/03 14:40:52 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAKE_BOARD_H
#define FT_MAKE_BOARD_H

#include <stdlib.h>
#include <stdio.h>

void		print_board(int **board, int size);

void		ft_fill_board(int **board, int **args, int size);

void		ft_make_board(int **args, int size);

#endif
