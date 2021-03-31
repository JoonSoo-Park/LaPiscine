#include <stdio.h>

int		ft_atoi(char *str);

int main(void)
{
	printf("%d\n", ft_atoi("12345"));
	printf("%d\n", ft_atoi("  \t \v \r  \n --+++--12345"));
	printf("%d\n", ft_atoi("  \t \v \r  \n ---+++--12345"));
	printf("%d\n", ft_atoi("12ab345"));
	printf("%d\n", ft_atoi("  \t \v \r  \n ---+++--ab12345"));
}
