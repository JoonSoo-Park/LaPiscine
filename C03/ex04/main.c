#include <stdio.h>
#include <string.h>
#include <stddef.h>

char	*ft_strstr(char *str, char *to_find);

int		main(int agrc, char*argv[])
{
	char *haystack;
	char *needle;
	char *result_ft;
	char *result_o;

	haystack = "This is me";
	needle = "hi";

	result_ft = ft_strstr(haystack, needle);
	result_o = strstr(haystack, needle);
	printf("%s\n", result_ft);
	printf("%s\n", result_o);
}
