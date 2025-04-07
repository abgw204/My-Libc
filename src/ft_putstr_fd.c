#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s != '\0')
		write(fd, &*s++, 1);
}
/*#include <stdio.h>
int	main()
{
	ft_putstr_fd("oiieeee", 1);
	return (0);
}*/
