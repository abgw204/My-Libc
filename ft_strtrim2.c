/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gada-sil <gada-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 09:39:30 by gada-sil          #+#    #+#             */
/*   Updated: 2024/09/30 09:40:25 by gada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	len3(char const *s1, char const *set)
{
	size_t	i;
	size_t	k;
	size_t	diff;

	i = 0;
	while (s1[i] != '\0')
	{
		k = 0;
		while (set[k] != '\0')
		{
			if (s1[i] == set[k])
			{
				diff++;
				break ;
			}
			k++;
		}
		if (diff == 0)
			break ;
		else
		{
			i++;
			continue ;
		}
	}
}
char    *ft_strtrim(char const *s1, char const *set)
{
	char *ptr;

	ptr = (char *)malloc(len3(s1, set) + 1);
	if (!ptr)
		return (NULL);
}
