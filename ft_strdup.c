#include <unistd.h>
#include <stdlib.h>

char	ft_strlen(char *str)
{
	int 	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
char	*ft_strdup(char *str)
{
	int	size;
	int	i;
	char	*ptr;

	i = 0;
	size = ft_strlen(str);
	ptr = malloc(sizeof(char) * size + 1);
	if (!ptr)
	{
		return (NULL);
	}
	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
int	main(void)
{
	char	*original = "Omar Ammar";
	char	*copy = ft_strdup(original);
	
	if (copy == NULL)
	{
		return (1);
	}
	write(1, "The Original : ", 15);
	write(1, original, ft_strlen(original));
	write(1, "\n", 1);

	write(1, "The Copy : ", 11);
	write(1, copy, ft_strlen(copy));
	write(1, "\n", 1);

	free (copy);

	return (0);
}
