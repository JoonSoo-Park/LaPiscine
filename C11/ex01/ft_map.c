/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 20:46:36 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/12 20:49:18 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int index;

	index = 0;
	while (index < length)
	{
		tab[index] = f(tab[index]);
		++index;
	}
	return (tab);
}
