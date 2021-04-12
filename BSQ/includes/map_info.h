/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_info.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 09:56:25 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/12 14:58:48 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_INFO
# define MAP_INFO

typedef struct s_map_info
{
	char	empty;
	char	obstacle;
	char	full;
	int		row;
	int		col;
}			t_info;

typedef struct s_point
{
	int		y;
	int		x;
	int		val;
}			t_point;

#endif
