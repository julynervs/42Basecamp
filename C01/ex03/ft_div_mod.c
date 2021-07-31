void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b; //se n passar, colocar verificação de b != 0
	*mod = a % b;
}
