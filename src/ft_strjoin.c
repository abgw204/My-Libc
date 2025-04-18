#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*ptr;
	size_t	i;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	i = 0;
	ptr = malloc(s1_len + s2_len + 1);
	if (!ptr)
		return (NULL);
	while (*s1)
	{
		ptr[i++] = *s1;
		s1++;
	}
	while (*s2)
	{
		ptr[i++] = *s2;
		s2++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*#include <stdio.h>
int	main()
{
	char	s1[] = "hello,";
	char	s2[] = " how are you?";
	printf("%s", ft_strjoin(s1, s2));
}*/
