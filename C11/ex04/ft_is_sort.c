/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 21:00:39 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/12 21:14:20 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			func(int a, int b)
{
	if (a < b)
		return (-1);
	else if (a == b)
		return (0);
	else
		return (1);
}

int			ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		idx;
	int		t;

	if (length == 1)
		return (1);
	if (a < b)
		t = -1;
	else if (a == b)
		t = 0;
	else
		t = 1;

}

#include <stdlib.h>
#include <stdio.h>
int main()
{
	int *arr;
	arr = malloc(sizeof(int) * 5);

	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;
	printf("%d\n", ft_is_sort(arr, 5, &func));
}
