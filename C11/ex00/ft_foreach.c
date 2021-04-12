/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 20:41:44 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/12 20:46:11 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_foreach(int *tab, int length, void (*f)(int))
{
	int		idx;

	idx = 0;
	while (idx < length)
	{
		f(tab[idx]);
		++idx;
	}
}
