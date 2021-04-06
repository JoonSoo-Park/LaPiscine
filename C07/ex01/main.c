/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 20:43:32 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/06 20:47:57 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max);

int main()
{
	int		*buffer;
	int		min = -3;
	int		max = 7;
	int		size = max - min;

	buffer = ft_range(min, max);
	for (int i = 0; i < size; ++i) {
		printf("%d ", buffer[i]);
	}
	free(buffer);

	printf("\n");

	min = -2147483648;
	max = -2147483640;
	size = max - min;
	buffer = ft_range(min, max);
	for (int i = 0; i < size; ++i) {
		printf("%d ", buffer[i]);
	}
	free(buffer);
}
