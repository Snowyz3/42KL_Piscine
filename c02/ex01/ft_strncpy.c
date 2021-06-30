char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int counter;
	
	counter = 0;
	while (*src && counter < n)
	{
		*dest = *src;
		dest++;
		src++;
		counter++;
	}
	while (counter < n)
	{
		*dest = '\0';
		dest++;
		counter++;
	}
	return (dest);
}

#include <stdio.h>
int	main(void)
{
	char a[] = "abcdef";
	char *b;

	ft_strncpy(b, a, 4);
	printf("%s\n%s", a, b);
}
