#include <unistd.h>
#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*destination;
	const unsigned char	*source;

	i = 0;
	destination = (unsigned char *)dst;
	source = (const unsigned char *)src;
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (dst);
}
int	main(void)
{
	char	str[] = "User";
	char	dst[5];

	ft_memcpy(dst, str, 4);
	dst[5] = '\0';
	write(1, dst, 4);
	write(1, "\n", 1);
}
