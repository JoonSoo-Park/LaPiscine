/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 15:22:02 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/28 16:29:32 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 != '\0' && (*s1 == *s2) && n > 0)
	{
		++s1;
		++s2;
		--n;
	}
	if (n == 0) return (0);
	return (*s1 - *s2);
}

int		main(void)
{
	char	str1[] = "abcdefg";
	char	str2[] = "ABCDEFG";
	char	str3[] = "abcdeKK";
	char	str4[] = "abcdefghi";

	printf("strncmp(%s, %s) : \t\t%d\n", str1, str2, strncmp(str1, str2, 7));
	printf("ft_strncmp(%s, %s) : \t\t%d\n", str1, str2, ft_strncmp(str1, str2, 7));

	printf("strncmp(%s, %s) : \t\t%d\n", str1, str3, strncmp(str1, str3, 7));
	printf("ft_strncmp(%s, %s) : \t\t%d\n", str1, str3, ft_strncmp(str1, str3, 7));

	printf("strncmp(%s, %s) : \t\t%d\n", str1, str4, strncmp(str1, str4, 7));
	printf("ft_strncmp(%s, %s) : \t\t%d\n", str1, str4, ft_strncmp(str1, str4, 7));

	printf("strncmp(%s, %s) : \t\t%d\n", str2, str1, strncmp(str2, str1, 3));
	printf("ft_strncmp(%s, %s) : \t\t%d\n", str2, str1, ft_strncmp(str2, str1, 3));

	printf("strncmp(%s, %s) : \t\t%d\n", str3, str1, strncmp(str3, str1, 3));
	printf("ft_strncmp(%s, %s) : \t\t%d\n", str3, str1, ft_strncmp(str3, str1, 3));

	printf("strncmp(%s, %s) : \t\t%d\n", str4, str1, strncmp(str4, str1, 3));
	printf("ft_strncmp(%s, %s) : \t\t%d\n", str4, str1, ft_strncmp(str4, str1, 3));
}
