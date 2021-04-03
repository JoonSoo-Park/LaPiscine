/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 21:06:12 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/03 21:07:23 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARGS_H
#define ARGS_H

int		ft_count_args(char *);

int		**ft_get_args(char *, int);

int		**ft_check_valid_args(int, char *[], int *);

#endif
