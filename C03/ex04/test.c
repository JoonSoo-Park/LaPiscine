/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 17:37:54 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/28 18:03:45 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		compare(char *X, char *Y)
{
	while (*X && *Y)
	{
		if (*X != *Y)
			return (0);
		++X;
		++Y;
	}
	return (*Y == '\0');
}

char	*ft_strstr(char *src, char *to_find)
{
	while (*src != '\0')
	{
		if ((*src == *to_find) && compare(src, to_find))
			return src;
		++src;
	}
	return NULL;
}

int		main(void)
{
	char	src[] = "abcdefghijkllllmopqrstuv";
	char	to_find1[] = "ghi";
	char	to_find2[] = "ghik";
	char	to_find3[] = "jkll";
	char	to_find4[] = "uvz";
	char	to_find5[] = "uv";

	printf("strstr(%s, %s) : %s\n", src, to_find1, strstr(src, to_find1));
	printf("ft_strstr(%s, %s) : %s\n", src, to_find1, ft_strstr(src, to_find1));

	printf("strstr(%s, %s) : %s\n", src, to_find2, strstr(src, to_find2));
	printf("ft_strstr(%s, %s) : %s\n", src, to_find2, ft_strstr(src, to_find2));

	printf("strstr(%s, %s) : %s\n", src, to_find3, strstr(src, to_find3));
	printf("ft_strstr(%s, %s) : %s\n", src, to_find3, ft_strstr(src, to_find3));

	printf("strstr(%s, %s) : %s\n", src, to_find4, strstr(src, to_find4));
	printf("ft_strstr(%s, %s) : %s\n", src, to_find4, ft_strstr(src, to_find4));

	printf("strstr(%s, %s) : %s\n", src, to_find5, strstr(src, to_find5));
	printf("ft_strstr(%s, %s) : %s\n", src, to_find5, ft_strstr(src, to_find5));

}
