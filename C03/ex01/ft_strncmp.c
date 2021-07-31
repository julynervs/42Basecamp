int	ft_strncmp(char	*s1, char *s2, unsigned int n)
{
	char			*c1;
	char			*c2;
	unsigned char	uc1;
	unsigned char	uc2;
	unsigned int	i;

	i = 0;
	c1 = s1;
	c2 = s2;
	while ((*c1 || *c2) && (i < n))
	{
		if (*c1 != *c2)
		{
			uc1 = *c1;
			uc2 = *c2;
			return (uc1 - uc2);
		}
		c1++;
		c2++;
		i++;
	}
	return (0);
}
