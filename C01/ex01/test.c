/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 22:56:49 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/25 23:01:51 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int		main(void)
{
	int a;
	int *pa = &a;
	int **ppa = &pa;
	int ***pppa = &ppa;
	int ****ppppa = &pppa;
	int *****pppppa = &ppppa;
	int ******ppppppa = &pppppa;
	int *******pppppppa = &ppppppa;
	int ********ppppppppa = &pppppppa;

	ft_ultimate_ft(&ppppppppa);
	printf("%d\n", a);
}
