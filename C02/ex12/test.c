/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 02:56:33 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/28 06:17:47 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			is_printable(char c)
{
	if (c >= 32 && c < 127)
	{
		return (1);
	}
	return (0);
}

void 		convhexa(int nbr)
{
	char *hexa;
	hexa = "0123456789abcdef";
	if (nbr > 15)
	{
		convhexa(nbr / 16);
		convhexa(nbr % 16);
	}
	else
		ft_putchar(hexa[nbr]);
}

void		printaddr(unsigned int addr)
{
	int count;
	unsigned int nbr;

	nbr = addr;
	count = 0;
	while (nbr > 0)
	{
		nbr /= 16;
		count++;
	}
	while (count++ < 15)
		write(1, "0", 1);
	convhexa(addr);
	write(1, ": ", 2);
}

void		*ft_print_memory(void *addr, unsigned int size)
{
	char	*temp;

	temp = addr;
	while (size > 0)
	{
		print_addr(temp);
		size -= 16;
		temp += 16;
	}
}

int			main(void)
{
	char *str = "Bonjour les aminches\t\n\tc  est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n ";
	ft_print_memory(str, 92);
}
