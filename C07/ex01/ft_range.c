/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:38:25 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/05 21:07:15 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	unsigned int	size;
	int				*ret;

	if (min >= max)
		return (0);
	size = max - min;
	ret = malloc(sizeof(int) * size);
	size = 0;
	while (min < max) 
		ret[size++] = min++;
	return (ret);
}
