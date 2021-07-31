char	*ft_strstr(char *str, char *to_find)
{
	char	*tf;
	char	*found;
	char	*c;

	found = 0;
	tf = to_find;
	c = str;
	while (c != '\0')
	{
		if (*c == *tf)
		{
			if (!found)
				*found = *c;
			tf++;
		}
		c++;
	}
	return (found);
}
