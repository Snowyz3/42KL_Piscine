int	ft_str_is_lowercase(char *str)
{
	while(*str)
	{
		if(!(*str >= 'a' && *str <= 'z'))
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

	a = ft_str_is_lowercase(e);
	b = ft_str_is_lowercase(f);
	c = ft_str_is_lowercase(g);
	d = ft_str_is_lowercase(h);
	printf("%d %d %d %d", a, b, c, d);
}
