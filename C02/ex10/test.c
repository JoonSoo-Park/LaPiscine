/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 22:51:29 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/27 23:41:04 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int index;

	index = 0;
	while (index < (size - 1) && src[index] != '\0')
	{
		dest[index] = src[index];
		++index;
	}
	dest[index] = '\0';
	return (index);
}

int main()
{
	char dst[40];
	char *src = "";

	ft_strlcpy(dst, src, 40);
	printf("%s\n", src);
	printf("%s\n", dst);

	char dst2[40];
	char *src2 = "1234567890123456789012345678901234567890123456";
	ft_strlcpy(dst2, src2, 40);
	printf("%s\n", src2);
	printf("%s\n", dst2);
}
