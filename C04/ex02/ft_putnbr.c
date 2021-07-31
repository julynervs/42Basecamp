#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	add;

	add = 0;
	if (nb < 0)
	{
		ft_putchar(45);
		if (nb == -2147483648)
		{
			nb++;
			nb = -nb;
			add = 1;
		}
		else
		{
			nb = -nb;
		}
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(48 + (nb % 10) + add);
}
