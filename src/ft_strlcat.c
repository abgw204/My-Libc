#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;
	size_t	to_copy;

	dlen = 0;
	slen = 0;
	to_copy = 0;
	while (dst[dlen] != '\0' && dlen < size)
		dlen++;
	if (dlen == size)
		return (dlen + ft_strlen(src));
	slen = ft_strlen(src);
	to_copy = size - dlen - 1;
	if (to_copy > slen)
		to_copy = slen;
	i = 0;
	while (i < to_copy)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + to_copy] = '\0';
	return (dlen + slen);
}
/*#include <stdio.h>
int    main(void)
{
	char s[] = "world";
	char d[] = "hello";
	char s2[] = "world";
	char d2[] = "hello";
	printf("%zu\n%s\n", ft_strlcat(d, s, 10), d);
	printf("%zu\n%s\n", strlcat(d2, s2, 10), d2);
}*/
