#include <unistd.h>

void	ft_set_num(int *num11, int *num12, int *num21, int *num22)
{
	if (*num12 == '9')
	{
		*num12 = '0';
		*num11 = *num11 + 1;
	}
	if (*num21 == '9' && *num22 == '9')
	{
		*num12 = *num12 + 1;
		*num21 = *num11;
		*num22 = *num12 + 1;
		if (*num12 == '9')
		{
			*num21 = *num11 + 1;
			*num22 = '0';
		}
	}
	else if (*num22 == '9')
	{
		*num22 = '0';
		*num21 = *num21 + 1;
	}
	else
		*num22 = *num22 + 1;
	if (*num11 == *num21 && *num12 == *num22)
		*num22 = *num22 + 1;
}

void	ft_print_num(int num11, int num12, int num21, int num22)
{
	write(1, &num11, 1);
	write(1, &num12, 1);
	write(1, " ", 1);
	write(1, &num21, 1);
	write(1, &num22, 1);
	if (!(num11 == '9' && num12 == '8' && num21 == '9' && num22 == '9'))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	num11;
	int	num12;
	int	num21;
	int	num22;

	num11 = '0';
	num12 = '0';
	num21 = '0';
	num22 = '1';
	while (!(num11 == '9' && num12 == '8' && num21 == '9' && num22 == '9'))
	{
		ft_print_num(num11, num12, num21, num22);
		ft_set_num(&num11, &num12, &num21, &num22);
	}
	ft_print_num(num11, num12, num21, num22);
	write (1, "\n", 1);
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
