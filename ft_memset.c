/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gada-sil <gada-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:36:05 by gada-sil          #+#    #+#             */
/*   Updated: 2024/09/25 13:30:33 by gada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t    i;

	i = 0;
	c = (unsigned char) c;
	while (i < n)
	{
		*((char *)s) = c;
		i++;
		s++;
	}
	return (s);
}
#/*include <stdio.h>
int main()
{
	int s[4] = {1, 2, 3, 4};
	char s1[4];
	ft_memset(s, 0, sizeof(s));

	ft_memset(s1, 'c', sizeof(s1));

	printf("%s\n", s1);

	printf("%d, %d, %d, %d", s[0], s[1], s[2], s[3]);
}*/
