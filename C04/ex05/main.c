#include <stdio.h>

int		ft_atoi_base(char *str, char *base);

int		main()
{
	printf("%d\n", ft_atoi_base("\r\v\n \r+---+--+1201201", "012"));
}
