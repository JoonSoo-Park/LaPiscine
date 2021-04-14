/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_info.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 09:56:25 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/13 21:20:21 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_INFO_H
# define MAP_INFO_H

typedef struct	s_map_info
{
	char	empty;
	char	obstacle;
	char	full;
	char	*str;
	int		row;
	int		col;
}				t_info;

typedef struct	s_point
{
	int		y;
	int		x;
	int		val;
}				t_point;

#endif
