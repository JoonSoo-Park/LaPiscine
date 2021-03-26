/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 22:53:33 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/26 23:39:16 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int		index;
	char	c;

	index = 0;
	while (str[index] != '\0')
	{
		c = str[index];
		if (c >= 'A' && c <= 'Z')
		{
			str[index] = c + 32;
		}
		++index;
	}
	return (str);
}

int		main(void)
{
	/*
	 ** hELlo+
	 ** 1aNn
	 */
	char str1[] = {'h', 'E', 'L', 'l', 'o', '+', '\n', '1', 'a', 78, 110, '\0'};

	ft_strupcase(&str1[0]);
	printf("%s\n", str1);
}
