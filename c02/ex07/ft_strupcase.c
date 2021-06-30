char	*ft_strupcase(char *str)
{
	while (*str)
	{
		if (*str >= 97 && *str <= 122)
			*str = *str - 32;
		str++;
	}
	return (str);
}

#include <stdio.h>
int	main(void)
{
	char	a[] = "AbCdE11Cd";

	ft_strupcase(a);
	printf("%s", a);
}
