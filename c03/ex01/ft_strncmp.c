int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				sum1;
	int				sum2;
	unsigned int	counter;

	sum1 = 0;
	sum2 = 0;
	counter = 0;
	while ((s1[counter] || s2[counter]) && counter < n)
	{
		if (s1[counter])
			sum1 += s1[counter];
		if (s2[counter])
			sum2 += s2[counter];
		counter++;
	}
	if (sum1 - sum2 < 0)
		return (-1);
	else if (sum1 - sum2 > 0)
		return (1);
	else
		return (0);
}

#include <stdio.h>
int	main()
{
	int	i;
	
	i = ft_strncmp("jkl", "jka", 3);
	printf("%d", i);
}
