#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	while (*s != '\0')
		write(fd, &*s++, 1);
	write(fd, "\n", 1);
}
