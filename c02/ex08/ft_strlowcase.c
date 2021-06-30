char	*ft_strlowcase(char *str)
{
	while (*str)
	{
		if (*str >= 65 && *str <= 90)
			*str = *str + 32;
		str++;
	}
	return (str);
}

#include <stdio.h>
int	main(void)
{
	char	a[] = "AbCdE11Cd";

	ft_strlowcase(a);
	printf("%s", a);
}
