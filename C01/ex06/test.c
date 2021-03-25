/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 23:19:45 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/25 23:23:15 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int length;

	length = 0;
	while (*str != '\0')
	{
		++length;
		++str;
	}
	return (length);
}

int		main(void)
{
	int l = ft_strlen("hii");
	char string[6];

	printf("%s -> %d\n", "hii", l);
	
	string[0] = '0';
	string[1] = '1';
	string[2] = '2';
	string[3] = '3';
	string[4] = '4';
	string[5] = '\0';
	l = ft_strlen(&string[0]);
	printf("%s -> %d\n", string, l);	
}
