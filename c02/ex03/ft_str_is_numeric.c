int	ft_str_is_numeric(char *str)
{
	while(*str)
	{
		if(!(*str >= '1' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}

#include <stdio.h>
int	main(void)
{
	int     a;
	int     b;
	int     c;
	int     d;
	char    e[] = "abc";
	char    f[] = "ABC";
	char    g[3];
	char	h[]="123";

	a = ft_str_is_numeric(e);
	b = ft_str_is_numeric(f);
	c = ft_str_is_numeric(g);
	d = ft_str_is_numeric(h);
	printf("%d %d %d %d", a, b, c, d);
}
