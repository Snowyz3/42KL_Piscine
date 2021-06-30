int	ft_str_is_uppercase(char *str)
{
	while(*str)
	{
		if(!(*str >= 'A' && *str <= 'Z'))
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
	char	f[] = "ABC";
	char	g[3];
	char	h[] = "123";

	a = ft_str_is_uppercase(e);
	b = ft_str_is_uppercase(f);
	c = ft_str_is_uppercase(g);
	d = ft_str_is_uppercase(h);
	printf("%d %d %d %d", a, b, c, d);
}
