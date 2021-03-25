/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 23:11:37 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/25 23:18:29 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		ft_putchar(str[idx++]);
	}
}

int		main(void)
{
	char string[5];
	char *first_pointer;

	string[0] = 'H';
	string[1] = 'H';
	string[2] = 'H';
	string[3] = 'H';
	string[4] = '\0';

	first_pointer = &string[0];
	printf("%s\n", string);
	ft_putstr(first_pointer);
	ft_putstr("THis is the second");
}
