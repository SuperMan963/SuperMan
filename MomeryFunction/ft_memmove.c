#include <unistd.h>
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*destination;
	const unsigned char	*source;

	i = 0;
	destination = (unsigned char *)dst;
	source = (const unsigned char *)src;
	if (!dst && !src)
	{
		return (NULL);
	}
	if (destination > source)
	{
		while (n--)
		{
			destination[i] = source[i];
		}
	}
	else
	{
		while (i < n)
		{
			destination[i] = source[i];
			i++;
		}
	}
	return (dst);
}
int	main(void)
{
	char	str[] = "HeeelloWorld";

	ft_memmove(str + 2, str, 12);
	write(1, str, 12);
}
