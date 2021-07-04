char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	counter1;
	unsigned int	counter2;

	counter1 = 0;
	counter2 = 0;
	while (dest[counter1])
		counter1++;
	while (src[counter2] && counter2 < nb)
	{
		dest[counter1] = src[counter2];
		counter1++;
		counter2++;
	}
	if (counter2 != nb)
		dest[counter1] = '\0';
	return (dest);
}

#include <stdio.h>
int main()
{
	char str1[100] = "This is ", str2[] = "programiz.com";

	ft_strncat(str1, str2, 50);
	printf("%s %s", str1, str2);
}
