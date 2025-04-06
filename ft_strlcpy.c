#include "libc.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
/*#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
	char src[] = "Hello World";
	char dest[15];
	char dest2[15];
	printf("%zu\n", ft_strlcpy(dest, src, 3));

	printf("%s\n", dest);

	printf("%zu\n", strlcpy(dest2, src, 3));

	printf("%s\n", dest2);
}*/
