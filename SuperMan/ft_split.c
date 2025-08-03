#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == *charset)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
		{
			i++;
		}
		if (str[i])
		{
			count++;
		}
		while (str[i] && !is_sep(str[i], charset))
		{
			i++;
		}
	}
	return (count);
}
char	*malloc_word(char *str, char *charset)
{
	int	i;
	char	*ptr;
	int	size;

	i = 0;
	size = 0;
	while (str[size] && !is_sep(str[size], charset))
	{
		size++;
	}
	ptr = malloc(sizeof(char) * size + 1);
	if (!ptr)
	{
		return (NULL);
	}
	while (i < size)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
char	**ft_split(char *str, char *charset)
{
	int	i;
	int	j;
	char	**split;

	i = 0;
	j = 0;
	split = malloc(sizeof(char *) * count_words(str, charset) + 1);
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
		{
			i++;
		}
		if (str[i])
		{
			split[j] = malloc_word(&str[i], charset);
			if (!split[j])
			{
				return (NULL);
			}
			j++;
		}
		while (str[i] && !is_sep(str[i], charset))
		{
			i++;
		}
	}
	split[j] = NULL;
	return (split);
}
int	main(void)
{
	char	**split;
	int	i;

	i = 0;
	split = ft_split("User User User", " ");
	write(1, "The First Name : ", 17);
	while (split[i])
	{
		ft_putstr(split[i]);
		write(1, "\n", 1);
		i++;
		write(1, "The Sucend Name : ", 18);
		while (split[i])
		{
			ft_putstr(split[i]);
			write(1, "\n", 1);
			i++;
			write(1, "The Nickname : ", 15);
			while (split[i])
			{
				ft_putstr(split[i]);
				write(1, "\n", 1);
				i++;
			}
		}
		i++;
	}
	return (0);
}
