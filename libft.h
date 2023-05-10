/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarbero <sbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:06:52 by sbarbero          #+#    #+#             */
/*   Updated: 2023/05/08 14:48:01 by sbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* Include libraries */

# include <ctype.h>
# include <stdlib.h>
# include <strings.h>
# include <string.h>

# include <unistd.h>
# include <stdio.h>

/* Functions from <ctype.h> library */

// alphabetic character test.
int		ft_isalpha(int i);
// decimal-digit character test.
int		ft_isdigit(int i);
// alphanumeric character test.
int		ft_isalnum(int i);
// test for ASCII character.
int		ft_isascii(int i);
// printing character test (space character inclusive).
int		ft_isprint(int i);
// upper case to lower case letter conversion.
int		ft_tolower(int i);
// lower case to upper case letter conversion.
int		ft_toupper(int i);

/* Funtions from <stdlib.h> library */

// convert ASCII string to integer.
int		ft_atoi(const char *str);
// memory allocation.
void	*ft_calloc(size_t count, size_t size);

/* Funtions from <strings.h> library */

// find length of string.
size_t	ft_strlen(const char *str);
// size-bounded string copying.
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
// size-bounded string contention.
size_t	ft_strlcat(char *dest, const char *src, size_t n);
// size-bounded string comparison.
int		ft_strncmp(const char *s1, const char *s2, size_t n);
// locate character in string (first occurrence).
char	*ft_strchr(const char *str, int i);
// locate character in string (last occurrence).
char	*ft_strrchr(const char *str, int i);
// locate a substring in a string (size-bounded).
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
// save a copy of a string (with malloc).
char	*ft_strdup(const char *str);

/* Functions from <string.h> library */

// write zeroes to a byte string.
void	ft_bzero(void *s, size_t n);
// write a byte to a byte string.
void	*ft_memset(void *s, int c, size_t n);
// copy memory area.
void	*ft_memcpy(void *dest, const void *src, size_t n);
// copy byte string.
void	*ft_memmove(void *dest, const void *src, size_t n);
// locate byte in byte string.
void	*ft_memchr(const void *s, int c, size_t n);
// compare byte string.
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/* Non-standard functions */

#endif