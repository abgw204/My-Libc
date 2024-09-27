/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gada-sil <gada-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:45:05 by gada-sil          #+#    #+#             */
/*   Updated: 2024/09/27 17:02:02 by gada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_int_min_fix(void)
{
	char	*str;

	str = (char *)malloc(12);
	ft_strlcpy(str, "-2147483648\0", 12);
	return (str);
}

static int	ft_intlen_with_sign(int n)
{
	int	l;

	l = 0;
	if (n < 0)
	{
		n *= -1;
		l++;
	}
	if (n == 0)
		return (404);
	while (n > 0)
	{
		n /= 10;
		l++;
	}
	return (l);
}

static char	*ft_reverse(char *str, int len)
{
	int		i;
	char	temp;

	i = 0;
	len -= 1;
	if (str[i] == '0')
		return (str);
	while (i < len)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char    *str;
	int		nbr;
	int		len;
	int		i;

	nbr = n;
	i = 0;
	len = ft_intlen_with_sign(n);
	if (len == 404)
	{
		str = malloc(2);
		str[i++] = '0';
	}
	if (n == -2147483648)
		return (ft_int_min_fix());
	else if (n != 0)
		str = (char *)malloc(len + 1);
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		str[i++] = (n % 10) + '0';
		n /= 10;
	}
	if (nbr < 0)
		str[i++] = '-';
	str[i] = '\0';
	ft_reverse(str, len);
	return (str);
}
#include <stdio.h>
int    main()
{
	printf("%s", ft_itoa(0));
}
