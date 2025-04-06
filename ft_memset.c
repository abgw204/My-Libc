#include "libc.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n > 0)
	{
		*str = (unsigned char)c;
		n--;
		str++;
	}
	return (s);
}
/*#include <stdio.h>
int main()
{
	int s[4] = {1, 2, 3, 4};
	char s1[4];
	ft_memset(s, 0, sizeof(s));

	ft_memset(s1, 'c', sizeof(s1));

	printf("%s\n", s1);

	printf("%d, %d, %d, %d", s[0], s[1], s[2], s[3]);
}*/
