#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;
	size_t	total_size;

	if (num != 0 && (num * size) / num != size)
		return (NULL);
	total_size = num * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}
/*#include <stdio.h>
int	main()
{
	int *ptr;

	ptr = (int *)ft_calloc(4, sizeof(long));
	printf("%d, %d, %d, %d", ptr[0], ptr[1], ptr[2], ptr[3]);

}*/
