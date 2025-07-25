#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 10);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb *= -1);
	}
	else if (nb == 0)
	{
		write(1, "0", 1);
	}
	else if (nb > 0 && nb < 10)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
int	main(void)
{
	int	result;

	result = ft_strcmp("omar", "omar");
	write(1, "The Ruslt1 = ", 13);
	ft_putnbr(result);
	write(1, "\n", 1);

	result = ft_strcmp("omar", "omaz");
	write(1, "The Ruslt2 = ", 13);
	ft_putnbr(result);
	write(1, "\n", 1);

	result = ft_strcmp("omaz", "omar");
	write(1, "The Ruslt3 = ", 13);
	ft_putnbr(result);
	write(1, "\n", 1);
	return (0);
}
