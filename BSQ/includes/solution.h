/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:59:51 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/13 21:03:02 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLUTION_H
# define SOLUTION_H

# include "map_info.h"

int		func(int **map, int y, int x);

void	solution(int **map, t_info *map_info, t_point *point);

void	make_result(char **map, t_info *map_info, t_point *point);

#endif
