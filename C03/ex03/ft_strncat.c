char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*d;
	char			*s;
	unsigned int	i;

	i = 0;
	d = dest;
	while (*d != '\0')
		d++;
	s = src;
	while (*s != '\0' && i < nb)
	{
		*d = *s;
		d++;
		s++;
		i++;
	}
	*d = '\0';
	return (dest);
}
