/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 00:38:34 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/07 00:39:32 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CONVERT_BASE2_H
# define FT_CONVERT_BASE2_H

int		ft_strlen(char *str);

int		ft_is_space(char c);

int		ft_check_base(char *str);

int		get_base_to_length(int num, int radix);

#endif
