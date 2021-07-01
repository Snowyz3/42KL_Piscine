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
