#include "libc.h"

char	*ft_strdup(const char *src)
{
	char	*ptr;
	int		i;

	if (src == NULL)
		return (NULL);
	ptr = malloc(ft_strlen((char *)src) + 1);
	i = 0;
	if (ptr == NULL)
		return (NULL);
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*#include <stdio.h>
int    main(void)
{
	char    src[] = "HELLO0000000.";

	printf("%s", ft_strdup(src));
}*/
