char	*ft_strcat(char *dest, char *src)
{
	char	*d;
	char	*s;

	d = dest;
	while (*d != '\0')
		d++;
	s = src;
	while (*s != '\0')
	{
		*d = *s;
		d++;
		s++;
	}
	*d = '\0';
	return (dest);
}
