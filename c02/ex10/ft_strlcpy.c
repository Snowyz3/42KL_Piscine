unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;

	counter = 0;
	while (src[counter] && counter < size)
	{
		dest[counter] = src[counter];
		counter++;
	}
	if (counter == size)
		counter--;
	dest[counter] = '\0';
	return (counter);
}

#include <stdio.h>
int	main(void)
{
	char	a[] = "ab";
	char	b[4];

	ft_strlcpy(b, a, 4);
	printf("%s\n%s", a, b);
}
