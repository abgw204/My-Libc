#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*str == (unsigned char)c)
			return (str);
		str++;
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
int	main()
{
	char s1[] = "";
	char s2[] = "";
	char *teste;
	char *teste2;

	teste = ft_memchr(s1, '.', 10);
	teste2 = memchr(s2, '.', 10);

	printf("%s\n", teste);
	printf("%s\n", teste2);
}*/
