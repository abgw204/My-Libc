int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}
/*#include <stdio.h>
int	main()
{
	printf("%c", ft_tolower('M'));
}*/
