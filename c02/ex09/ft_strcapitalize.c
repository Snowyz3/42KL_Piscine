int	is_alpha(char ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		if (is_alpha(str[counter]))
		{
			if ((!(is_alpha(str[counter - 1])) || counter == 0))
			{
				if (str[counter] >= 'a' && str[counter] <= 'z')
					str[counter] = str[counter] - 32;
			}
			else
			{
				if (str[counter] >= 'A' && str[counter] <= 'Z')
					str[counter] = str[counter] + 32;
			}
		}
		counter++;
	}
	return (str);
}

#include <stdio.h>
int	main(void)
{
	char	a[] = "salut, comment tu vas ? 42mots qUARante-deux; cInQuAnte+et+un";

	ft_strcapitalize(a);
	printf("%s", a);
}
