#include "libc.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
}
/*#include <stdio.h>
int main()
{
	printf("%d", ft_isalnum('a'));
}*/
