/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 22:13:13 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/14 23:21:52 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "utilities.h"
#include <stdlib.h>

void		kk(void)
{
	int		fd;
	int		size;
	char	buffer[4096];

	fd = open("tmp", O_CREAT | O_RDWR | O_TRUNC, S_IWUSR | S_IRUSR);
	while ((size = read(0, buffer, 4096)) > 0)
	{
		write(fd, buffer, size);
	}
	close(fd);
}

int			main(int argc, char *argv[])
{
	int		idx;

	if (argc == 1)
	{
		kk();
		argv[0] = "tmp";
		core(argv[0]);
	}
	idx = 1;
	while (idx < argc)
	{
		if (idx > 1)
			ft_putstr("\n");
		core(argv[idx]);
		++idx;
	}
}
