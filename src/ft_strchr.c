#include "libft.h"

char	*ft_strchr(const char *s1, int c)
{
	if (c > 255)
		return ((char *)s1);
	while (*s1)
	{
		if (*s1 == c)
			return ((char *)s1);
		s1++;
	}
	if ((char)c == '\0')
		return ((char *)s1);
	return (0);
}
/*#include <stdio.h>
int main()
{
	char s1[] = "tripouille";
	char s2[] = "tripouille";
	printf("%d\n", ft_strchr(s1, 't' + 256) == s1);
	printf("%d\n", strchr(s2, 't' + 256) == s2);
}*/
