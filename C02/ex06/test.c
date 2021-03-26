/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 21:29:56 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/26 21:59:35 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_str_is_printable(char *str)
{
	int		index;
	char	c;

	index = 0;
	while (str[index] != '\0')
	{
		c = str[index];
		if (!(c >= 32 && c < 127))
		{
			return (0);
		}
		++index;
	}
	return (1);
}

int main(void)
{
	char *str = "asjifhawoeivalkcvj\x73";
	char *str1 = "asj\x7Fifhawoeivalkcvj\x73";
	char *str2 = "aiosehvieFOLLOWING IS A SPACE sahf";
	char *str3 = "aiosehvieFOLLOWING IS A TAB	sahf";
	char *str4 = "x12i4eflaisefjilsej\n";

	printf("%d\n", ft_str_is_printable(str));
	printf("%d\n", ft_str_is_printable(str1));
	printf("%d\n", ft_str_is_printable(str2));
	printf("%d\n", ft_str_is_printable(str3));
	printf("%d\n", ft_str_is_printable(str4));
}
