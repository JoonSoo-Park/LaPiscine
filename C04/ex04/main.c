#include <stdio.h>

void		ft_putnbr_base(int nbr, char *base);

int main()
{
	ft_putnbr_base(12345678, "0123456789");
	printf("\n");
	ft_putnbr_base(12345678, "0123456789ABCDEF");
	printf("\n");
	ft_putnbr_base(12345678, "01234567");
	printf("\n");
	ft_putnbr_base(12345678, "poneyvif");
	printf("\n");
	ft_putnbr_base(12345678, "7");
	printf("\n");
	ft_putnbr_base(12345678, "1237+vc");
	printf("\n");
	ft_putnbr_base(12345678, "12342");
	printf("\n");
	ft_putnbr_base(4526, "01");
	printf("\n");
}
