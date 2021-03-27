/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 21:06:22 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/27 16:54:27 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str)
{
	int		index;
	char	c;

	index = 0;
	while (str[index] != '\0')
	{
		c = str[index];
		if (!(c >= 'a' && c <= 'z'))
		{
			return (0);
		}
		++index;
	}
	return (1);
}

int		main(void)
{
	char *str1 = "aisdhvlkjdivjhILHIHDFIOHF";
	char *str2 = "klajfij3ijigov984aikv";
	char *str3 = "iaojhvelkvhjsldiafhjailshfd";
	char *str4 = "";

	printf("%d\n", ft_str_is_lowercase(str1));
	printf("%d\n", ft_str_is_lowercase(str2));
	printf("%d\n", ft_str_is_lowercase(str3));
	printf("%d\n", ft_str_is_lowercase(str4));
}
