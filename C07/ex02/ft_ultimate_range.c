/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 21:07:59 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/05 21:12:14 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	unsigned int	size;

	if (min >= max)
		return (0);
	size = max - min;
	*range = malloc(sizeof(int) * size);
	size = 0;
	while (min < max)
		range[size++] = range[min++];
	return (size);
}


