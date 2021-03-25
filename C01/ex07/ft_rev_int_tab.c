/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 23:23:53 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/25 23:34:13 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int n;
	int tmp;

	n = 0;
	while (n < size / 2)
	{
		tmp = *(tab + n);
		*(tab + n) = *(tab + size - n - 1);
		*(tab + size - n - 1) = tmp;
		n++;
	}
}
