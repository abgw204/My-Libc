size_t	len3(char const *s1, char const *set)
{
	size_t	i;
	size_t	k;
	size_t	diff;

	i = 0;
	while (s1[i] != '\0')
	{
		k = 0;
		while (set[k] != '\0')
		{
			if (s1[i] == set[k])
			{
				diff++;
				break ;
			}
			k++;
		}
		if (diff == 0)
			break ;
		else
		{
			i++;
			continue ;
		}
	}
}
char    *ft_strtrim(char const *s1, char const *set)
{
	char *ptr;

	ptr = (char *)malloc(len3(s1, set) + 1);
	if (!ptr)
		return (NULL);
}
