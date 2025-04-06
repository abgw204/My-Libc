#include "libc.h"

static int	verify(const char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*transform(char *ptr, char *s1, size_t start, size_t end)
{
	size_t	i;

	i = 0;
	while (start < end)
	{
		ptr[i] = s1[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		end;
	size_t		start;
	char		*ptr;

	start = 0;
	end = strlen((char *)s1);
	if (s1 == NULL || *s1 == '\0')
		return (ft_strdup(""));
	while (verify(s1[start], set) == 1)
		start++;
	while (verify(s1[end - 1], set) == 1)
		end--;
	if (start >= end)
		return (ft_strdup(""));
	ptr = (char *)malloc((end - start) + 1);
	if (!ptr)
		return (NULL);
	transform(ptr, (char *)s1, start, end);
	return (ptr);
}
/*#include <stdio.h>
#include <string.h>
int    main()
{
	char	*s = ft_strtrim("   xxxhixxx    ", " x");
	printf("%s", s);

}*/
