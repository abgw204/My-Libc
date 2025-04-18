int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (!(*str >= '0' && *str <= '9'))
	{
		if (*str == '-')
			sign = -1;
		else if (*str != '+')
			return (0);
		str++;
	}
	while (*str >= '0' && *str <= '9')
		res = res * 10 + (*str++ - 48);
	return (res * sign);
}
/*#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("%d\n", ft_atoi("\e76"));
	printf("%d", atoi("\e76"));
}*/
