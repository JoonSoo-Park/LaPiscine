/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 15:03:32 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/11 15:04:10 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ATOI_H
# define FT_ATOI_H

int		is_space(char c);

int		is_number(char c);

int		ft_atoi(char *str);

#endif
