/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 21:11:39 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/14 16:37:22 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FREE_H
# define FT_FREE_H

void	free_str(char *str);

void	map_free(char **map, t_info *info, int index);

void	sol_free(char **map, int **imap, t_info *info, int index);

void	free_everything(char **map, int **imap, t_info *info);

#endif
