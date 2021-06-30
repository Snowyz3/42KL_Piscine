void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}

#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;

	a = 15;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("%d\n%d", a, b);
}
