unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	counter;

	counter = 0;
	while (*src && counter < size)
	{
		*dest = *src;
		dest++;
		src++;
		counter++;
	}
	if (counter == size)
		dest--;
	*dest = '\0';
	return (counter);
}

#include <stdio.h>
int	main(void)
{
	char	a[] = "ab";
	char	*b;

	ft_strlcpy(b, a, 4);
	printf("%s\n%s", a, b);
}
