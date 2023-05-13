/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarbero <sbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:06:52 by sbarbero          #+#    #+#             */
/*   Updated: 2023/05/13 19:38:10 by sbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* Include libraries */

# include <ctype.h>
# include <stdlib.h>
# include <strings.h>
# include <string.h>

# include <limits.h>

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

// extract substring from string.
char	*ft_substr(char const *s, unsigned int start, size_t len);
// concatenate two strings into a new string (with malloc).
char	*ft_strjoin(char const *s1, char const *s2);
// trim beginning and end of string with the specified characters.
char	*ft_strtrim(char const *s1, char const *set);
// split string, with specified character as delimiter, an array of strings.
char	**ft_split(char const *s, char c);
// convert integer to ASCII string.
char	*ft_itoa(int n);
// create new string from modifying string with specified function.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
// trim beginning and end of string with the specified characters.
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
// output a character to given file.
void	ft_putchar_fd(char c, int fd);
// output a string to given file.
void	ft_putstr_fd(char const *s, int fd);
// output a string to given file with newline.
void	ft_putendl_fd(char *s, int fd);
// output integer to given file.
void	ft_putnbr_fd(int n, int fd);

/* Part 2 - bonuses */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

// create a new list.
t_list	*ft_lstnew(void *content);

void	ft_lstadd_front(t_list **lst, t_list *new);

int		ft_lstsize(t_list *lst);

t_list	*ft_lstlast(t_list *lst);

void	ft_lstadd_back(t_list **lst, t_list *new);

void	ft_lstdelone(t_list *lst, void (*del)(void *));

void	ft_lstclear(t_list **lst, void (*del)(void *));

void	ft_lstiter(t_list *lst, void (*f)(void *));

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif