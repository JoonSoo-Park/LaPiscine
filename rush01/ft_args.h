/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 10:23:46 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/03 14:40:22 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BASIC_H
#define FT_BASIC_H

#include <stdlib.h>
#include "./ft_basic.h"

int		ft_count_args(char *str);

int		**ft_get_args(char *argv, int size);

int		**ft_args(int argc, char *argv[], int *size);

#endif
