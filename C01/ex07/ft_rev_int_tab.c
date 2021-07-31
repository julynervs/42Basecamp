void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	min;
	int	max;

	min = 0;
	max = size - 1;
	while (min < max)
	{
		temp = tab[min];
		tab[min] = tab[max];
		tab[max] = tab[min];
		max--;
		min++;
	}
}
