/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 18:26:19 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/29 21:38:29 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char			*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	index = 0;
	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		++index;
	}
	while (index < n)
	{
		dest[index] = '\0';
		++index;
	}
	return (dest);
}

int				main(void)
{
	char *src;
	char dest[100];

	src = "Hello World";
	printf("%s\n", src);

	ft_strncpy(dest, src, 5);
	printf("%s\n", dest);
	ft_strncpy(dest, src, 30);
	printf("%s\n", dest);

	src = "This is the world most biggest effel towel, made in South Africa";
	ft_strncpy(dest, src, 90);
	printf("%s\n", dest);

}
