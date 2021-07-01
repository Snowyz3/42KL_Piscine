char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (src[counter] && counter < n)
	{
		dest[counter] = src[counter];
		counter++;
	}
	while (counter < n)
	{
		dest[counter] = '\0';
		counter++;
	}
	return (dest);
}

#include <stdio.h>
int main()
{
	char a[] = "123456";
	char b[6];

	ft_strncpy(b, a, 4);
	printf("%s", b);
}
