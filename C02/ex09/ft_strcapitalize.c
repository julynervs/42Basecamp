char	*ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	i = -1;
	while (str[++i] != 0)
		if ((str[i] >= 'a' && str[i] <= 'z')
		&& (!((str[i - 1] >= 'a' && str[i - 1] <= 'z')
		|| (str[i - 1] >= '0' && str[i - 1] <= '9'))))
			str[i] = str[i] - 32;
	return (str);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
