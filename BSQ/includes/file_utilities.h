/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_utilities.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@studnet.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 15:02:33 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/11 16:08:56 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_UTILITIES_H
# define FILE_UTILITIES_H

int		read_first_line(int fd, char *empty, char *obst, char *full);

int		read_file(char *file_name, char *empty, char *obst, char *full);

int		get_length(char *file_name);

#endif
