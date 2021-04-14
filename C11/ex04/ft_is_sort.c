/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 21:00:39 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/14 10:02:27 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_ascending(int *tab, int length, int (*f)(int, int))
{
	int		idx;

	idx = 0;
	while (idx < length - 1)
	{
		if (f(tab[idx], tab[idx + 1]) > 0)
			return (0);
		++idx;
	}
	return (1);
}

int			ft_descending(int *tab, int length, int (*f)(int, int))
{
	int		idx;

	idx = 0;
	while (idx < length - 1)
	{
		if (f(tab[idx], tab[idx + 1]) < 0)
			return (0);
		++idx;
	}
	return (1);
}

int			ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	return (ft_ascending(tab, length, f) || ft_descending(tab, length, f));
}
