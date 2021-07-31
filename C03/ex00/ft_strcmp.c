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
