#include <unistd.h>
#include <stdlib.h>

int	ft_num_len(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
	{
		len = 1;
	}
	while (nb != '\0')
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	int	i;
	char	*ptr;
	unsigned int	num;
	int	len;

	len = ft_num_len(nb);
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
	{
		return (NULL);
	}
	ptr[len] = '\0';

	if (nb == 0)
	{
		ptr[0] = '0';
		return (ptr);
	}
	if (nb < 0)
	{
		ptr[0] = '-';
		num = -nb;
	}
	else 
	{
		num = nb;
	}
	i = len - 1;
	while (num > 0)
	{
		ptr[i] = (num % 10) + '0';
		num /= 10;
		i--;
	}
	return (ptr);
}

int	main(void)
{
	char	*s1 = ft_itoa(123);
	write(1, "The Ruslt = ", 12);
	write(1, s1, 3);
	write(1, "\n", 1);
	char	*s2 = ft_itoa(0);
	write(1, "The Ruslt = ", 12);
	write(1, s2, 1);
	write(1, "\n", 1);
	char	*s3 = ft_itoa(-42);
	write(1, "The Ruslt = ", 12);
	write(1, s3, 3);
	write(1, "\n", 1);
	return (0);
}
