/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 03:33:28 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/01 03:35:38 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int idx;

	idx = 0;
	while (argv[0][idx] != '\0')
	{
		write(1, &argv[0][idx], 1);
		++idx;
	}
	write(1, &"\n", 1);
}
