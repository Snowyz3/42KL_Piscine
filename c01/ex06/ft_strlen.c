int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

#include <stdio.h>
int	main(void)
{
	char	a[6];
	int		len;

	a[0] = 'a';
	a[1] = 'b';
	a[2] = 'c';
	a[3] = 'd';
	a[4] = 'e';
	a[5] = '\0';
	len = ft_strlen(a);
	printf("%d", len);
}
