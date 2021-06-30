int	ft_str_is_printable(char *str)
{
	while(*str)
	{
		if(!(*str >= 32 && *str <= 127))
			return (0);
		str++;
	}
	return (1);
}

#include <stdio.h>
int	main(void)
{
	int		a;
	int		b;
	int		c;
	int		d;
	char	e[] = "abc";
	char	f[] = "\t\t";
	char	g[3];
	char	h[] = "123";

	a = ft_str_is_printable(e);
	b = ft_str_is_printable(f);
	c = ft_str_is_printable(g);
	d = ft_str_is_printable(h);
	printf("%d %d %d %d", a, b, c, d);
}
