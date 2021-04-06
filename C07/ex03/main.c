/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joonpark <joonpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 21:10:54 by joonpark          #+#    #+#             */
/*   Updated: 2021/04/06 21:34:54 by joonpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main()
{
	char *buffer;
	char *strs[4];
	strs[0] = "1234567";
	strs[1] = "8901234";
	strs[2] = "567890123";
	strs[3] = "45678";
	buffer = ft_strjoin(3, strs, "abc");
	if (buffer != 0)
	{
		printf("%s\n", buffer);
		free(buffer);
	}
}
