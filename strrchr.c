/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gada-sil <gada-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:25:11 by gada-sil          #+#    #+#             */
/*   Updated: 2024/09/24 14:31:22 by gada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
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
	printf("%s", ft_strrchr("iiiiii.oooooo.aaaaaaa.ppppp", '.'));
}*/
