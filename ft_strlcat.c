/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gada-sil <gada-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:51:42 by gada-sil          #+#    #+#             */
/*   Updated: 2024/09/25 16:01:26 by gada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t    ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;

	i = 0;
	j = 0;
	dst_len = ft_strlen(dst) + ft_strlen(src);
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && j < size)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (dst_len);
}
/*#include <stdio.h>
int    main(void)
{
	char src[] = "good morning";
	char dest[] = "hello, ";
	printf("%zu\n%s", ft_strlcat(dest, src, 15), dest);
}*/
