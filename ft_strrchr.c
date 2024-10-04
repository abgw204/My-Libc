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
	if (c > 255)
		return ((char *)str);
	if (c == '\0')
		return ((char *)&str[ft_strlen(str)]);
	while (*str)
		str++;
	str--;
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		str--;
	}
	return (0);
}
/*#include <stdio.h>
int	main(void)
{
	printf("Theirs: %s\n", strrchr("iiiiii.oooooo.aaaaaaa.ppppp", '\0'));
	printf("Mine: %s", ft_strrchr("iiiiii.oooooo.aaaaaaa.ppppp", '\0'));
}*/
