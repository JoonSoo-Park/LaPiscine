/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyun <gyun@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 12:59:20 by gyun              #+#    #+#             */
/*   Updated: 2021/04/14 20:05:01 by gyun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include "map_info.h"
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

void	core(char *fn);
char	*ft_strdup(char *str, int size);
int		count_file_size(char *fn);
char	*file_to_str(char *fn, int count);
int		count_n(char *str);
char	*get_first_line(t_info *map, char *str);
char	**get_map_from_str(t_info *info, char *str);
int		*intdup(t_info *map, char *str, int size);
int		**get_sol_from_str(char **mmap, t_info *map, char *str);
int		is_valid_first_line(t_info *info, char *str);
int		is_valid_map(t_info *info, char *str);
int		is_printable(char c);
int		check_block(t_info *info);
char	*get_first_line_sub(t_info *map, char *str);
char	*haha(t_info *info, char *str);
void	get_solution(char **map, int **sol, t_info *info, t_point *point);
void	kk(void);
int		is_valid_map2(t_info *info, char *str);

#endif
