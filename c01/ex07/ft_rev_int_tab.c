#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	counter;
	int	end;

	end = size / 2;
	counter = 0;
	while (counter < end)
	{
		temp = tab[counter];
		tab[counter] = tab[size - 1];
		tab[size - 1] = temp;
		size--;
		counter++;
	}
}

#include <stdio.h>
int	main(void)
{
	int	a[5];
	int	counter;

	counter = 0;
	while (counter < 5)
	{
		a[counter] = counter;
		counter++;
	}
	ft_rev_int_tab(a, 5);
	counter = 0;
	while (counter < 5)
	{
		printf("%d", a[counter]);
		counter++;
	}
}
