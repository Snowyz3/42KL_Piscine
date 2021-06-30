void	ft_sort_int_tab(int *tab, int size)
{
	int	counter;
	int	counter2;
	int	temp;

	counter = 0;
	while (counter < size)
	{
		counter2 = 0;
		while (counter2 < size - counter - 1)
		{
			if (tab[counter2] > tab[counter2 + 1])
			{
				temp = tab[counter2];
				tab[counter2] = tab[counter2 + 1];
				tab[counter2 + 1] = temp;
			}
			counter2++;
		}
		counter++;
	}
}

#include <stdio.h>
int	main(void)
{
	int	a[] = {2, 1, 5, 3};
	int	counter;

	ft_sort_int_tab(a, 4);
	counter = 0;
	while (counter < 4)
	{
		printf("%d", a[counter]);
		counter++;
	}
}
