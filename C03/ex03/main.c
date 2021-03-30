#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main(int argc, char *argv[])
{
	char dest1[15];
	char dest2[15];

	for (int i = 0; i < 7; ++i) {
		dest1[i] = 48 + i;
		dest2[i] = 48 + i;
	}

	char *src = "hello";
	printf("%s\n", ft_strncat(dest1, src, 2));
	printf("%s\n", strncat(dest2, src, 2));
}
