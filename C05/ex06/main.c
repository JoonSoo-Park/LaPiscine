#include <stdio.h>

int		ft_is_prime(int nb);

int		main(void)
{
	for (int i = 0; i < 1001; ++i)
	{
		if (ft_is_prime(i))
			printf("%d\n", i);
	}
}
