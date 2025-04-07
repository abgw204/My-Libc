#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((char *)s) = 0;
		i++;
		s++;
	}
}
/*#include <stdio.h>
int main()
{
	char s[20];
	ft_bzero(s, 20);
	printf("%s", s);
}*/
