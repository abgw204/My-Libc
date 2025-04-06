#include <unistd.h>

void	ft_putnbr_fd(int nb, int fd)
{
	char	c;
	char	d;

	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		d = ((nb % 10) + '0');
		write(fd, &d, 1);
	}
	else
	{
		c = (nb + '0');
		write(fd, &c, 1);
	}
}
/*int	main(void)
{
	ft_putnbr(32, 1);
	return (0);
}*/
