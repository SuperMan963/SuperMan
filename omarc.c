#include <stdio.h>
char	*ft_cabt(char *str)
{
	int	i;
	int	first;

	i = -1;
	first = 1;
	while (str[++i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (first)
				str[i] -= 32;
			first = 0;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (!first)
				str[i] += 32;
			first = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			first = 1;
		else
		{
			first = 1;
		}
	}
	return (str);
}
int	main()
{
	char	str[] = "oMar aMmar ayYash";

	printf("The Full Name = %s\n", ft_cabt(str));
}
