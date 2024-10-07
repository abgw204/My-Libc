/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gada-sil <gada-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:25:11 by gada-sil          #+#    #+#             */
/*   Updated: 2024/09/24 14:31:22 by gada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t		i;
	unsigned char	*s;

	s = (unsigned char *)str;
	i = 0;
	if (c > 255)
		return ((char *)&s[i]);
	while (s[i] != '\0')
		i++;
	if (c == '\0')
		return ((char *)&s[i]);
	while (i > 0 && s[i] != (char)c)
		i--;
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (0);
}
/*#include <stdio.h>
int	main(void)
{
	printf("Theirs: %s\n", strrchr("iiiiii.oooooo.aaaaaaa.ppppp", 'a'));
	printf("Mine: %s", ft_strrchr("iiiiii.oooooo.aaaaaaa.ppppp", 'a'));
}*/
