
 static int	count_len(int size, char **strs, char *sep)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	while (i < size)
		len += ft_strlen(strs[i++]);
	i++;
	len += (size - 1) * ft_strlen(sep) + 1;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		a;
	int		b;
	int		len;
	char	*p;

	i = 0;
	a = 0;
	b = 0;
	len = count_len(size, strs, sep);
	p = malloc(sizeof(char) * len);
	while (a < size)
	{
		b = 0;
		while (strs[a][b])
			p[i++] = strs[a][b++];
		b = 0;
		while (sep[b] && a < size - 1)
			p[i++] = sep[b++];
		a++;
	}
	p[i] = '\0';
	return (p);
}