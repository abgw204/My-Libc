/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gada-sil <gada-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:38:12 by gada-sil          #+#    #+#             */
/*   Updated: 2024/09/26 18:31:17 by gada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	strlen3(char const *s1, char const *set)
{
	size_t	i;
	size_t	k;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		k = 0;
		while (set[k] != '\0')
		{
			if (s1[i] == set[k])
			{
				j++;
				break ;
			}
			k++;
		}
		i++;
	}
	return (i - j);
}

static char	*ft_fill(char *ptr, char const *s1, char const *set)
{
	size_t	i;
	size_t	k;
	size_t	pos;

	i = 0;
	pos = 0;
	while (s1[i] != '\0')
	{
		k = 0;
		while (set[k] != '\0')
		{
			if (s1[i] == set[k])
			{
				i++;
				k = 0;
				continue ;
			}
			k++;
		}
		ptr[pos++] = s1[i++];
	}
	return (ptr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;

	ptr = (char *)malloc(strlen3(s1, set) + 1);
	if (!ptr)
		return (NULL);
	ft_fill(ptr, s1, set);
	return (ptr);
}
/*#include <stdio.h>
int	main()
{
	char s1[] = "hello,$$$$$$ i'm ######very 999999dumb";
	char set[] = "$#9";
	printf("%s", ft_strtrim(s1, set));
}*/
