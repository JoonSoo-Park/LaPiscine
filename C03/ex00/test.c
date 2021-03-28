/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 15:22:02 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/28 15:52:56 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	int		index;

	index = 0;
	while (s1[index] != '\0' && (s1[index] == s2[index]))
	{
		++index;
	}
	return (s1[index] - s2[index]);
}

int		main(void)
{
	char	str1[] = "abcdefgh";
	char	str2[] = "ABCDEFGH";
	char	str3[] = "abcdefghij";
	char	str4[] = "abcd";

	printf("strcmp(%s, %s) : %d\n", str1, str2, strcmp(str1, str2));
	printf("ft_strcmp(%s, %s) : %d\n\n", str1, str2, ft_strcmp(str1, str2));

	printf("strcmp(%s, %s) : %d\n", str1, str3, strcmp(str1, str3));
	printf("ft_strcmp(%s, %s) : %d\n\n", str1, str3, ft_strcmp(str1, str3));

	printf("strcmp(%s, %s) : %d\n", str3, str1, strcmp(str3, str1));
	printf("ft_strcmp(%s, %s) : %d\n\n", str3, str1, ft_strcmp(str3, str1));

	printf("strcmp(%s, %s) : %d\n", str3, str4, strcmp(str3, str4));
	printf("ft_strcmp(%s, %s) : %d\n\n", str3, str4, ft_strcmp(str3, str4));

	printf("strcmp(%s, %s) : %d\n", str3, str3, strcmp(str3, str3));
	printf("ft_strcmp(%s, %s) : %d\n\n", str3, str3, ft_strcmp(str3, str3));
}
