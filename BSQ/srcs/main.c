/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 22:13:13 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/11 15:08:54 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "file_utilities.h"

int		main(int argc, char *argv[])
{
	char	empty;
	char	full;
	char	obst;
	int		line;

	if (argc != 1)
	{
		line = read_file(argv[1], &empty, &obst, &full);
		printf("%d\n", line);
	}
	return (0);
}
