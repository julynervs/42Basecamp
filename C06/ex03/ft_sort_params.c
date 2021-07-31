#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strcmp(char	*s1, char *s2)
{
	char			*c1;
	char			*c2;
	unsigned char	uc1;
	unsigned char	uc2;

	c1 = s1;
	c2 = s2;
	while (*c1 || *c2)
	{
		if (*c1 != *c2)
		{
			uc1 = *c1;
			uc2 = *c2;
			return (uc1 - uc2);
		}
		c1++;
		c2++;
	}
	return (0);
}

void	ft_swap(char *a, char *b)
{
	char	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				ft_swap(argv[i], argv[j]);
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
	return (0);
}
