#include <stdio.h>

void ft_ft(int *nbr);
void	ft_ultimate_ft(int *********nbr);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_ultimate_div_mod(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_rev_int_tab(int *tab, int size);
void	print_int_array(int *array, int size);

int	main(void)
{/*//ex00
	int	*nbr;
	int	a;

	nbr = &a;
	a = 0;
	printf("%d\n", a);
	ft_ft(nbr);
	printf("%d\n", a);

//ex01
	int	nbr;
	int	*p1;
	int	**p2;
	int	***p3;
	int	****p4;
	int	*****p5;
	int	******p6;
	int	*******p7;
	int ********p8;
	int	*********p9;

	nbr = 85;
	p1 = &nbr;
	p2 = &p1;
	p3 = &p2;
	p4 = &p3;
	p5 = &p4;
	p6 = &p5;
	p7 = &p6;
	p8 = &p7;
	p9 = &p8;
	printf("%d\n", nbr);

	ft_ultimate_ft(p9);
	printf("%d\n", nbr);*/


//ex02
	int		a;
	int		b;

	a = 24;
	b = 98;
	printf("\n#BEFORE#\na: %d\nb: %d\n", a, b);
	ft_swap(&a, &b);
	printf("\n#AFTER#\na: %d\nb: %d\n", a, b);
/*
//ex03
	int	a;
	int	b;
	int	*div;
	int	*mod;

	a = 5;
	b = 2;
	div = &a;
	mod = &b;
	//printf("addr_a: %p\naddr_b: %p\n####", div, mod);
	ft_div_mod(a, b, div, mod);
	//printf("\naddr_div: %p\naddr_mod: %p\n####", &div, &mod);
	printf("\ndiv: %d\nmod: %d\n", *div, *mod);

//ex04
	int	*a;
	int	*b;
	int	num;
	int	den;

	num = 6;
	den = 4;
	a = &num;
	b = &den;
	ft_ultimate_div_mod(a, b);
	printf("div: %d\nmod: %d\n", *a, *b);

//ex05
	char	*array;

	array = "hello world! \n";
	ft_putstr(array);

//ex06
	char	*phrase;

	phrase = "alo alo";
	printf("%d\n", ft_strlen(phrase));

//ex07
	int	table_size;
	int	table[5] = {2, 5, 6, 7, 8};

	table_size = 5;
	print_int_array(table, 5);
	ft_rev_int_tab(table, table_size);
	print_int_array(table, 5);
*/
	return (0);
}

void	print_int_array(int *array, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%i", array[i]);
		i++;
	}
	printf("\n");
}