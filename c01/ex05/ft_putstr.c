#include <unistd.h>

void	putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		putchar(*str);
		str++;
	}
}

int	main(void)
{
	char	a[6];

	a[0] = 'a';
	a[1] = 'b';
	a[2] = 'c';
	a[3] = 'd';
	a[4] = 'e';
	a[5] = '\0';
	ft_putstr(a);
}
