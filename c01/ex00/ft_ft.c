void	ft_ft(int *nbr)
{
	*nbr = 42;
}

#include <stdio.h>
int	main(void)
{
	int	a;

	ft_ft(&a);
	printf("%d", a);
}
