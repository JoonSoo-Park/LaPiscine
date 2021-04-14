/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 20:46:36 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/14 13:57:04 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		index;
	int		*ret;

	if (!(ret = malloc(sizeof(int) * length)))
		return (0);
	index = 0;
	while (index < length)
	{
		ret[index] = f(tab[index]);
		++index;
	}
	return (ret);
}
