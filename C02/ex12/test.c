/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 02:56:33 by joonpark          #+#    #+#             */
/*   Updated: 2021/03/29 21:11:02 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

const char	*g_hex_look_up = "0123456789abcdef";

int			is_printable(char c)
{
	return (c >= 32 && c < 127);
}

void		ft_print_hex_addr(char buffer[], unsigned int radix, long addr)
{
	unsigned int	buf_index;
	unsigned int	index;

	buf_index = 0;
	while (buf_index < radix)
	{
		buffer[buf_index] = '0';
		++buf_index;
	}
	--buf_index;
	while (addr > 0)
	{
		buffer[buf_index] = g_hex_look_up[addr % radix];
		addr /= radix;
		--buf_index;
	}
	index = 0;
	while (index < 16)
	{
		write(1, &buffer[index], 1);
		++index;
	}
	write(1, &": ", 2);
}

void		ft_print_hex(char *str, int size)
{
	char	c;
	int		index;
	int		ct;

	index = 0;
	ct = 1;
	while (index < size)
	{
		c = str[index++];
		write(1, &g_hex_look_up[c / 16], 1);
		write(1, &g_hex_look_up[c % 16], 1);
		if (ct % 2 == 0)
			write(1, &" ", 1);
		++ct;
	}
}

void		ft_print_line(char *str, long addr, int size)
{
	char			buffer[16];
	unsigned int	index;

	ft_print_hex_addr(buffer, 16, addr);
	ft_print_hex(str, size);
	index = 0;
	while (index < 16 - size)
	{
		write(1, &" ", 1);
		++index;
	}
	index = 0;
	while (index < size)
	{
		if (is_printable(str[index]))
			write(1, &str[index], 1);
		else
			write(1, &".", 1);
		++index;
	}
	write(1, &"\n", 1);
}

void		ft_print_memory(void *addr, unsigned int size)
{
	unsigned int		cur;

	cur = 0;
	while (cur < size)
	{
		if (size - cur >= 16)
			ft_print_line((char *)addr, (long)addr, 16);
		else
			ft_print_line((char *)addr, (long)addr, size - cur);
		cur += 16;
		addr += 16;
	}
}

int			main(void)
{
		char *str = "Bonjour les aminches\t\n\tc  est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n ";
		ft_print_memory(str, 92);
}
