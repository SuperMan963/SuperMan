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

char	*ft_strcpy(char *src, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		src[i] = str[i];
		i++;
	}
	src[i] = '\0';
	return (src);
}
int	main(void)
{
	char	str[] = "User1 User2";
	char	src[100];

	ft_strcpy(omar, str);
	
	write(1, "src = ", 7);
	ft_putstr(omar);
	write(1, "\n", 1);

	write(1, "str = ", 7);
	ft_putstr(str);
	write(1, "\n", 1);
	return (0);
}
