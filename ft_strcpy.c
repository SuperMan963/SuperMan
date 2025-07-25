#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*ft_strcpy(char *omar, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		omar[i] = str[i];
		i++;
	}
	omar[i] = '\0';
	return (omar);
}
int	main(void)
{
	char	str[] = "Omar Ammar";
	char	omar[100];

	ft_strcpy(omar, str);
	
	write(1, "omar = ", 7);
	ft_putstr(omar);
	write(1, "\n", 1);

	write(1, "str = ", 7);
	ft_putstr(str);
	write(1, "\n", 1);
	return (0);
}
