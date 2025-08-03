#include <unistd.h>
#include <stdlib.h>
char	ft_putstr(char *s1)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		write(1, &s1[i], 1);
		i++;
	}
}
int	is_set(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}
int	ft_strlen(char *s1)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		i++;
	}
	return (i);
}
char	*ft_strtrim(char *s1, char *set)
{
	int	i;
	int	start;
	int	end;
	char	*ptr;

	i = 0;
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && is_set(s1[start], set))
	{
		start++;
	}
	while (end >= start && is_set(s1[end], set))
	{
		end--;
	}
	ptr = malloc(sizeof(char) * end - start + 2);
	if (!ptr)
	{
		return (NULL);
	}
	while (start <= end)
	{
		ptr[i] = s1[start];
		start++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
int	main(void)
{
	char	*result;

	result = ft_strtrim("..  ,,, .,. User...",". ,");
	write(1, result, ft_strlen(result));
}
