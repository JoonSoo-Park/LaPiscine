/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 18:09:58 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/26 18:25:23 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char				*ft_strcpy(char *dest, char *src)
{
	int idx;

	idx = 0;
	while (src[idx] != '\0')
	{
		dest[idx] = src[idx];
		++idx;
	}
	dest[idx] = '\0';
	return (dest);
}

int			main(void)
{
	char dest[100];
	char src[40];

	strcpy(src, "This is tutorialPoint.com");
	ft_strcpy(dest, src);

	printf("%s\n", src);
	printf("%s\n", dest);
}
