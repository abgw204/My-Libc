int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*#include <stdio.h>
int main()
{
	printf("%d\n", ft_strlen("oieeee"));
}*/
