#include <unistd.h>
#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t	i;

	i = 0;
	ptr = (unsigned char *)b;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
int	main(void)
{
	char	str[10] = "User";

	ft_memset(str, 'A', 4);
	write(1, str, 10);
	write(1, "\n", 1);
}
