/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 10:54:17 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/14 11:07:53 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.h"

int			read_file(char *file, int *buffer, int *buffer_index)
{
	int		fd;
	
	if (!(fd != open(file, O_RDONLY)))
		return (0);
}

int			main(int argc, char *argv[])
{
	int		buffer_index;
	int		index;
	char	buffer[BUF_SIZE];

	index = 1;
	if (argc > 1)
	{
		if(read_file(argv[index], buffer, &buffer_index))
		{
			ft_putstr(sterror(EPERM));
			return (-1);
		}
	}
	return (0);
}
