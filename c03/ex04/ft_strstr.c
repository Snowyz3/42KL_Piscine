int	getcount(char *to_find)
{
	int	counter;

	counter = 0;
	while (to_find[counter])
		counter++;
	return (counter);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*p;
	char	*result;
	int		n;
	int		counter;

	p = str;
	counter = 0;
	n = getcount(to_find);
	while (*p && counter < n)
	{
		if (*p == to_find[counter])
		{
			if (counter++ == 1)
				result = p - 1;
		}
		else if (*p == to_find[0])
			counter = 1;
		else
			counter = 0;
		if (counter == n)
			return (result);
		p++;
	}
	return (str);
}

#include <stdio.h>
int	main()
{
	char	a[] = "cccbbaaaa";
	char	b[] = "bba";
	char	*result;

	result = ft_strstr(a, b);
	printf("%s", result);
}
