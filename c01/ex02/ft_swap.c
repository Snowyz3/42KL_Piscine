void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 2;
	printf ("%d%d\n", a, b);
	ft_swap(&a, &b);
	printf ("%d%d", a, b);
}
