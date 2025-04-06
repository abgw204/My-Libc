#include "libc.h"

char	*ft_substr(char const *s, unsigned int start, size_t size)
{
	size_t	i;
	size_t	len;
	char	*ptr;

	i = 0;
	len = ft_strlen(s);
	if (start >= len)
		return (ft_strdup(""));
	if (size > len - start)
		size = len - start;
	ptr = (char *)malloc(size + 1);
	if (!ptr)
		return (NULL);
	while (i < size)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*#include <stdio.h>
int	main()
{
	char s[] = "this is a test";
	printf("%s", ft_substr(s, 10, 2000000));
}*/
