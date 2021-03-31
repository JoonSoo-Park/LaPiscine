#include <stdio.h>

int		ft_atoi_base(char *str, char *base);

int		main()
{
	printf("%d\n", ft_atoi_base("\r\v\n \r+--+--+1201201", "012"));
	printf("%d\n", ft_atoi_base("   +-++++--4a", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("\r\v\n01232 \r+--+--+1201201", "01234"));
	printf("%d\n", ft_atoi_base("\r\v\n01232 \r+--+--+1201201", "012234"));
	printf("%d\n", ft_atoi_base("\r\v\n01232 \r+--+--+1201201", "01 234"));
	printf("%d\n", ft_atoi_base("\r\v\n01232 \r+--+--+1201201", "01+234"));
	printf("%d\n", ft_atoi_base("\r\v\n01232 \r+--+--+1201201", "01\v234"));
	printf("%d\n", ft_atoi_base("\r\v\n01232 \r+--+--+1201201", "01\t234"));
	printf("%d\n", ft_atoi_base("\r\v\n +---+-- 5678", "01234"));
}
