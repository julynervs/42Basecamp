#include <unistd.h>

void	ft_putchar(char c);
void	int_to_char(int n1, int n2);

void	ft_print_comb2(void)
{
	int	n2;
	int	n1;

	n1 = 0;
	while (n1 < 99)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			int_to_char(n1, n2);
			if (!((n1 == 98) && (n2 == 99)))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			n2++;
		}
		n1++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	int_to_char(int n1, int n2)
{
	ft_putchar(48 + (n1 / 10));
	ft_putchar(48 + (n1 % 10));
	ft_putchar(' ');
	ft_putchar(48 + (n2 / 10));
	ft_putchar(48 + (n2 % 10));
}
