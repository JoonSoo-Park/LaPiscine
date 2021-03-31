/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 17:26:44 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/30 19:31:44 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

const char	*g_hex_look_up = "0123456789ABCDEF";

void		ft_print_addr_hex(long cur_addr, unsigned int radix)
{
	unsigned int	index;
	char			buffer[16];

	index = 0;
	while (index < radix)
		buffer[index++] = '0';
	index = radix - 1;
	while (cur_addr > 0)
	{
		buffer[index--] = g_hex_look_up[cur_addr % radix];
		cur_addr /= radix;
	}
	index = 0;
	while (index < radix)
		write(1, &buffer[index++], 1);
	write(1, &": ", 2);
}

int			is_non_printable(char c)
{
	return (c < 32 || c == 127);
}

void		ft_print_hex(unsigned char *cur_addr, void *addr, unsigned int size)
{
	unsigned int	index;

	index = 0;
	while (index < 16)
	{
		if ((unsigned char*)addr + size <= cur_addr + ind:q
ex)
		{
			write(1, &"  ", 2);
		}
		else
		{
			write(1, &g_hex_look_up[*(cur_addr + index) / 16], 1);
			write(1, &g_hex_look_up[*(cur_addr + index) % 16], 1);
		}
		if (++index % 2 == 0)
			write(1, &" ", 1);
	}
}

void		ft_print_line(char *cur_addr, void *addr, unsigned int size)
{
	unsigned int	index;

	ft_print_addr_hex((long)cur_addr, 16);
	ft_print_hex((unsigned char*)cur_addr, addr, size);
	index = 0;
	while (index < 16)
	{
		if (is_non_printable(cur_addr[index]))
			write(1, &".", 1);
		else
			write(1, &cur_addr[index], 1);
		++index;
	}
}

void		*ft_print_memory(void *addr, unsigned int size)
{
	char		*cur_addr;

	cur_addr = (char*)addr;
	while ((void*)cur_addr < addr + size)
	{
		ft_print_line(cur_addr, addr, size);
		write(1, &"\n", 1);
		cur_addr += 16;
	}
	return (addr);
}
