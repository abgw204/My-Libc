/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gada-sil <gada-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:45:05 by gada-sil          #+#    #+#             */
/*   Updated: 2024/09/27 17:15:14 by gada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	unsigned char	*src2 = (unsigned char *) src;
	unsigned char	*dest2 = (unsigned char *) dest;

	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest2);
}
/*#include <stdio.h>
int	main()
{
	int src[5] = {5, 4, 3, 2, 1};
	int dest[5] = {1, 2, 3, 4, 5};

	ft_memcpy(dest, src, 20);
	printf("%d, %d, %d, %d, %d", dest[0], dest[1], dest[2], dest[3], dest[4]);
}*/
