/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 03:17:40 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/13 03:30:02 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utility.h"
#include <fcntl.h>
#include <unistd.h>

void	read_file(char *file_name)
{
	char	c;
	int		fd;

	if ((fd = open(file_name, O_RDONLY)) < 0)
	{
		ft_putstr("Cannot read file.\n");
		return ;
	}
	while (1)
	{
		if (read(fd, &c, 1) == 0)
			break ;
		ft_putchar(c);
	}
}

int		main(int argc, char *argv[])
{
	if (argc == 1)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
		read_file(argv[1]);
}
