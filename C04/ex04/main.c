#include <stdio.h>

void		ft_putnbr_base(int nbr, char *base);

int main()
{
	printf(" ======== Check Condition ====== \n");
	printf("empty base : \n");
	ft_putnbr_base(74, "");
	printf("\n");
	printf("length 1 : \n");
	ft_putnbr_base(74, "0");
	printf("\n");
	printf("+, -  : \n");
	ft_putnbr_base(74, "012345+6789abcdef");
	printf("\n");
	printf(" ======== Test ====== \n");
	printf("-80000000 : \n");
	ft_putnbr_base(-2147483648, "0123456789abcdef");
	printf("\n");
	printf("1221 : \n");
	ft_putnbr_base(52, "012");
	printf("\n");
	printf("4a : \n");
	ft_putnbr_base(74, "0123456789abcdef");
	printf("\n");
	printf("oon : \n");
	ft_putnbr_base(74, "poneyvif");
	printf("\n");
	printf("112 : \n");
	ft_putnbr_base(74, "01234567");
	printf("\n");
}
