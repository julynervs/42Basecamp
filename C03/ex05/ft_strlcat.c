unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*d;
	char			*s;
	unsigned int	i;

	d = dest;
	i = 0;
	while (*d != '\0')
	{
		d++;
	}
	s = src;
	while (*s != '\0' && i < size)
	{
		*d = *s;
		d++;
		s++;
		i++;
	}
	*d = '\0';
	return (i);
}
