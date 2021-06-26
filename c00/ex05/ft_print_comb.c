#include <unistd.h>

void	ft_print_comb(void);
void	ft_check_last(int count1, int count2, int count3);

int	main(void)
{
	ft_print_comb();
	return (0);
}

void	ft_print_comb(void)
{
	int	count1;
	int	count2;
	int	count3;

	count1 = '0';
	while (count1 <= '7')
	{
		count2 = count1 + 1;
		while (count2 <= '8')
		{
			count3 = count2 + 1;
			while (count3 <= '9')
			{
				write (1, &count1, 1);
				write (1, &count2, 1);
				write (1, &count3, 1);
				ft_check_last(count1, count2, count3);
				count3++;
			}
			count2++;
		}
		count1++;
	}
}

void	ft_check_last(int count1, int count2, int count3)
{
	if (count1 == '7' && count2 == '8' && count3 == '9')
		write (1, "\n", 1);
	else
	{
		write (1, ",", 1);
		write (1, " ", 1);
	}
}
