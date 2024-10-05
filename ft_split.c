/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gada-sil <gada-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:23:00 by gada-sil          #+#    #+#             */
/*   Updated: 2024/10/01 14:23:02 by gada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	int	i;
	int	counter;
	int	flag;

	i = 0;
	counter = 0;
	flag = 0;
	while (s[i])
	{
		if (s[i] != c && flag == 0)
		{
			counter++;
			flag = 1;
		}
		else if (s[i] == c)
			flag = 0;
		i++;
	}
	return (counter);
}

static size_t	find_size(char const *str, char c, int *index)
{
	size_t	size;
	size_t	flag;

	size = 0;
	flag = 0;
	while (str[*index])
	{
		if (str[*index] != c && str[*index])
		{
			size++;
			flag = 1;
		}
		else if (str[*index] == c && flag == 1)
			return (size);
		(*index)++;
	}
	return (size);
}

static void	transform(char **array, char const *s, char c)
{
	size_t	i;
	size_t	k;
	size_t	pos;

	i = 0;
	k = 0;
	pos = 0;
	while (s[pos])
	{
		while (s[pos] == c)
			pos++;
		while (s[pos] && s[pos] != c)
			array[i][k++] = s[pos++];
		k = 0;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char		**array;
	size_t		strings;
	size_t		i;
	size_t		size;
	int			index;

	size = 0;
	i = 0;
	index = 0;
	strings = count_words(s, c);
	array = (char **)malloc((strings + 1) * sizeof(char *));
	if (!s || !array)
		return (NULL);
	while (i < strings)
	{
		size = find_size(s, c, &index);
		array[i] = (char *)calloc(size + 1, 1);
		if (!array[i++])
			return (NULL);
	}
	transform(array, s, c);
	array[i] = (char *)malloc(1);
	array[i] = NULL;
	return (array);
}
/*#include <stdio.h>
int    main()
{
	char    **ptr;

	ptr = ft_split("  tripouille  42  ", ' ');
	if (ptr[2] == NULL)
		printf("DEU BOM");
	else
		printf("DEU RUIM");
}*/
