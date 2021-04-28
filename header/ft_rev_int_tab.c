/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 19:21:07 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/28 19:55:55 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			ft_rev_int_tab(int *tab, int size)
{
	int		index;
	int		mid;
	int		temp;

	mid = size / 2;
	index = 0;
	while (index < mid)
	{
		temp = *(tab + index);
		*(tab + index) = *(tab + size - index - 1);
		*(tab + size - index - 1) = temp;
		++index;
	}
}
