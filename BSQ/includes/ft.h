/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyun <gyun@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 12:59:20 by gyun              #+#    #+#             */
/*   Updated: 2021/04/12 17:34:54 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

#include "map_info.h"

void	core(char *fn);
char	*ft_strdup(char *str, int size);
int		count_file_size(char *fn);
char	*file_to_str(char *fn, int count);
int		count_n(char *str);
char	*get_first_line(t_info *map, char *str);
char	**get_map_from_str(t_info *info, char *str);
int		*intdup(t_info *map, char *str, int size);
int		**get_sol_from_str(t_info *map, char *str);
int		is_valid_first_line(t_info *info, char *str);
int		is_valid_map(t_info *info, char *str);

#endif
