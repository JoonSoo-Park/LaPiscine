/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 22:51:29 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/29 22:03:15 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	count;

	index = 0;
	while (src[count] != '\0')
		++count;
	while (index < (size - 1) && src[index] != '\0')
	{
		dest[index] = src[index];
		++index;
	}
	dest[index] = '\0';
	return (count);
}

int main()
{
	char dst[40];
	char *src = "1234567890123456789012345678901234567890123456";

	ft_strlcpy(dst, src, 20);
	printf("%s\n", src);
	printf("%s\n", dst);

	char dst2[40];
	char *src2 = "1234567890123456789012345678901234567890123456";
	strlcpy(dst2, src2, 20);
	printf("%s\n", src2);
	printf("%s\n", dst2);
	/*
	ft_strlcpy(dst2, src2, 20);
	printf("%s\n", src2);
	printf("%s\n", dst2);
	*/
}
