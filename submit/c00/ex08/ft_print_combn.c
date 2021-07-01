#include <unistd.h>

void	putnbr(int a)
{
	a = (a % 10) + 48;
	write (1, &a, 1);
}

void	set_array(int *a, int n)
{
	int	counter;
	int	setnum;

	counter = n - 1;
	setnum = 0;
	while (counter >= 0)
	{
		a[counter] = setnum;
		counter--;
		setnum++;
	}
}

void	print(int *a, int n)
{
	int	counter;

	counter = n - 1;
	while (counter >= 0)
	{
		putnbr(a[counter]);
		counter--;
	}
	if (a[n - 1] != 10 - n)
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_combn(int n)
{
	int	a[10];
	int	i;
	int	counter;
	int	max;

	set_array(a, n);
	while (a[n - 1] < 10 - n)
	{
		print(a, n);
		i = 0;
		max = 10;
		a[i]++;
		while (a[i] == max-- && i < n)
		{
			a[i + 1]++;
			counter = i++;
			while (counter >= 0)
			{
				a[counter] = a[counter + 1] + 1;
				counter--;
			}
		}
	}
	print(a, n);
}
