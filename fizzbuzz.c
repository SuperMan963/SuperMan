#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_putnbr(int nb)
{
	if (nb == 0)
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
void	fizzbuzz(int nb)
{
	if (nb % 3 == 0 && nb % 5 == 0)
	{
		write(1, "fizzbuzz", 8);
	}
	else if (nb % 3 == 0)
	{
		write(1, "fizz", 4);
	}
	else if (nb % 5 == 0)
	{
		write(1, "buzz", 4);
	}
	else
	{
		ft_putnbr(nb);
	}
}
int	main()
{
	int	nb;

	nb = 1;
	while (nb <= 100)
	{
		fizzbuzz(nb);
		nb++;
		write(1, "\n", 1);
	}
}
