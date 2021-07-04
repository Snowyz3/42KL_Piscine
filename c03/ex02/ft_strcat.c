char	*ft_strcat(char *dest, char *src)
{
	int	counter1;
	int	counter2;

	counter1 = 0;
	counter2 = 0;
	while (dest[counter1])
		counter1++;
	while (src[counter2])
	{
		dest[counter1] = src[counter2];
		counter1++;
		counter2++;
	}
	dest[counter1] = '\0';
	return (dest);
}

#include <stdio.h>
int main()
{
	char str1[100] = "This is ", str2[] = "programiz.com";

	ft_strcat(str1, str2);
	printf("%s %s", str1, str2);
}
