/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gada-sil <gada-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:21:26 by gada-sil          #+#    #+#             */
/*   Updated: 2024/09/24 11:31:22 by gada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s1, int c)
{
	while (*s1)
	{
		if (*s1 == c)
			return (char *)s1;
		s1++;
	}
	if ((char)c == '\0')
		return ((char *)s1);
	return (0);
}
/*#include <stdio.h>
int main()
{
	char *s1 = "Hi, my name is kyle";
	printf("%s", ft_strchr(s1, 'n'));
}*/
