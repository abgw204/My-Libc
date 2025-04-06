int	ft_toupper(int ch)
{
	if (ch >= 97 && ch <= 122)
		ch = ch - 32;
	return (ch);
}
/*#include <stdio.h>
int main()
{
	printf("%c", ft_toupper('a'));
}*/
