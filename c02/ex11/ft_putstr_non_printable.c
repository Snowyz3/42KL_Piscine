#include <unistd.h>

void	putchar(char ch)
{
	write(1, &ch, 1);
}

int	is_printable(char ch)
{
	if (ch >= 32 && ch <= 127)
		return (1);
	return (0);
}

void	calhex(int nb)
{
	int temp;
	int counter;

	counter = 0;
	while (nb > 0)
	{
		temp = nb % 16;
		nb = nb / 16;
		if (temp < 10)
			temp = temp + 48;
		else
			temp = temp + 87;
		if (counter == 0 && nb == 0)
			putchar(0 + 48);
		putchar(temp);
		counter++;
	}
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (is_printable(*str))
			putchar(*str);
		else
		{
			putchar('\\');
			calhex(*str);
		}
		str++;
	}
}

int	main(void)
{
	char a[] = "0aa291\nf8\t19";
	ft_putstr_non_printable(a);
}
