/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gada-sil <gada-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:34:05 by gada-sil          #+#    #+#             */
/*   Updated: 2024/09/25 14:34:48 by gada-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>

int	ft_isalpha(int c);

int	ft_isdigit(int c);

int	ft_isascii(int c);

int	ft_isprint(int c);

int	ft_isalnum(int c);

int	ft_tolower(int c);

int	ft_toupper(int ch);

size_t	ft_strlen(const char *str);

char	*ft_strchr(const char *s1, int c);

char	*ft_strrchr(const char *str, int c);

char	*ft_strdup(const char *src);

size_t	ft_strlcpy(char *dest, const char *src, size_t size);

int	ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_strnstr(const char *big, char *little, size_t size);

void	*ft_memset(void *s, int c, size_t n);

void	ft_bzero(void *s, size_t n);

int	ft_atoi(const char *str);

char	*ft_itoa(int n);

#endif
