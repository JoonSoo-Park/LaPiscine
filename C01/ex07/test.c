/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 23:23:53 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/25 23:34:36 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int		main(void)
{
	int arr[5] = {1,2,3,4,5};

	ft_rev_int_tab(&arr[0], 5);
	
	for (int i = 0; i < 5; ++i) {
		printf("%d ,", arr[i]);
	}
}
