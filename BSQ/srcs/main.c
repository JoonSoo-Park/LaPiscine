/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 22:13:13 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/12 18:33:59 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int		main(int argc, char *argv[])
{
	int		idx;

	idx = 1;
	while (idx < argc)
	{
		core(argv[idx]);
		++idx;
	}
}
