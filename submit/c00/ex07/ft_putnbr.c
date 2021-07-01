#include <unistd.h>

int	ft_check_negative(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
		write (1, "-", 1);
	}
	return (nb);
}

char	ft_get_count(int nb)
{
	int	count;

	count = 0;
	while (nb != 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

void	ft_putnbr(int nb)
{
	int		count;
	int		count2;
	int		temp;
	char	a;

	nb = ft_check_negative(nb);
	count = ft_get_count(nb);
	while (count != 0)
	{
		count2 = count;
		temp = nb;
		while (count2 != 1)
		{
			temp = temp / 10;
			count2--;
		}
		a = (temp % 10) + 48;
		write (1, &a, 1);
		count--;
	}
	write (1, "\n", 1);
}
