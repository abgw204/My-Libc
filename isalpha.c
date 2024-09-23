int	ft_isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return(0);
}
/*#include <stdio.h>
int main ()
{
	printf("%d\n", ft_isalpha('3'));
}*/
