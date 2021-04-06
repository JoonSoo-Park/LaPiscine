/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 20:43:32 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/06 20:46:12 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max);

int main()
{
	int		*buffer;
	int		min = -3;
	int		max = 7;
	int		size = max - min;

	printf("%d\n", ft_ultimate_range(&buffer, min, max));
	for (int i = 0; i < size; ++i) {
		printf("%d ", buffer[i]);
	}
	free(buffer);

	min = -2147483648;
	max = -2147483640;
	size = max - min;
	printf("%d\n", ft_ultimate_range(&buffer, min, max));
	for (int i = 0; i < size; ++i) {
		printf("%d ", buffer[i]);
	}
	free(buffer);
}
