/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 22:51:31 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/14 14:01:09 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "utility.h"
#include "atoi.h"

int		check_operator(char *str)
{
	if (!(str[0] == '+' || str[0] == '-' || str[0] == '*' ||
		str[0] == '/' || str[0] == '%'))
	{
		return (0);
	}
	return (1);
}

void	ft_operate(long long value1, long long value2, char operator)
{
	if (operator == '+')
		ft_putnbr(value1 + value2);
	else if (operator == '-')
		ft_putnbr(value1 - value2);
	else if (operator == '*')
		ft_putnbr(value1 * value2);
	else if (operator == '/')
	{
		if (value2 == 0)
			ft_putstr("Stop: division by zero");
		else
			ft_putnbr(value1 / value2);
	}
	else
	{
		if (value2 == 0)
			ft_putstr("Stop: modulo by zero");
		else
			ft_putnbr(value1 % value2);
	}
}

int		main(int argc, char *argv[])
{
	long long	value1;
	long long	value2;

	if (argc == 4)
	{
		if (check_operator(argv[2]) == 0)
		{
			ft_putstr("0\n");
			return (0);
		}
		value1 = ft_atoi(argv[1]);
		value2 = ft_atoi(argv[3]);
		ft_operate(value1, value2, argv[2][0]);
		ft_putchar('\n');
	}
}
