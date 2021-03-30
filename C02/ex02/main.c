#include <stdio.h>

int		ft_str_is_alpha(char *str);

int main(int argc, char *argv[])
{
	char *str = "aiwe4hfiosadhf ;;iksah fihsea 123";
	char *str2 = "aowiefhoihelfksahghsdfkhasdf";

	printf("%d\n", ft_str_is_alpha(str));
	printf("%d\n", ft_str_is_alpha(str2));
}
