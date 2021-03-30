#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char*src, unsigned int size);

int main(int argc, char *argv[])
{
	char dst1[8] = {'d', 's', 't', '\0'};
	char dst2[8] = {'d', 's', 't', '\0'};
	char *src = "src";

	printf("%d\n" ,ft_strlcat(dst1, src, 0));
	printf("%d\n" ,strlcat(dst2, src, 0));
}
