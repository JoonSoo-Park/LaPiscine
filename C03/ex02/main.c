#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int main(int argc, char *argv[])
{
	char dest1[15];
	char dest2[15];

	for (int i = 0; i < 7; ++i) {
		dest1[i] = 48 + i;
		dest2[i] = 48 + i;
	}
	char *src = "this is the src";

	printf("%s\n", ft_strcat(dest1, src));
	printf("%s\n", strcat(dest2, src));
}
