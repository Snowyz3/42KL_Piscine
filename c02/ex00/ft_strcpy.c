char	*ft_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

#include <stdio.h>
int	main(void)
{
	char a[] = "abcd";
	char *b;

	ft_strcpy(b, a);
	printf("%s\n%s", a, b);
}
