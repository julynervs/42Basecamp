void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	c;
	int	aux;

	c = 1;
	while (c < size)
	{
		i = 0;
		while (i < (size - 1))
		{
			if (tab[i + 1] < tab[i])
			{
				aux = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = aux;
			}
			i++;
		}
		c++;
	}
}
