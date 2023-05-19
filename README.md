<h1 align="center">
  42cursus libft
</h1>

<p align="center">
  <b><i>Repositorio desarrollados en <a href="https://www.42malaga.com/">42 Málaga</a></i></b><br>
</p>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/Selio30/42-libft?color=blueviolet" />
	<img alt="Number of lines of code" src="https://img.shields.io/tokei/lines/github/Selio30/42-libft?color=blueviolet" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/Selio30/42-libft?color=blue" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/Selio30/42-libft?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/Selio30/42-libft?color=brightgreen" />
</p>

<h3 align="center">
	<a href="#%EF%B8%8F-about">About</a>
	<span> · </span>
	<a href="#-index">Index</a>
	<span> · </span>
	<a href="#%EF%B8%8F-usage">Usage</a>
	<span> · </span>
	<a href="#-testing">Testing</a>
</h3>

---

## 🗣️ About

> _El objetivo de este proyecto es codificar una librería C reagrupando las funciones habituales que podrá usar en todos sus otros proyectos._

	🚀 TLDR: este proyecto consiste en codificar funciones básicas de C (ver más abajo), que luego se compilan
	en una biblioteca para usar en otros proyectos del curso.

### Functions from `<ctype.h>` library

* [`ft_isalpha`](libft/ft_isalpha.c)			- alphabetic character test.
* [`ft_isdigit`](libft/ft_isdigit.c)			- decimal-digit character test.
* [`ft_isalnum`](libft/ft_isalnum.c)			- alphanumeric character test.
* [`ft_isascii`](libft/ft_isascii.c)		  - test for ASCII character. 
* [`ft_isprint`](libft/ft_isprint.c)			- printing character test (space character inclusive).
* [`ft_tolower`](libft/ft_tolower.c)			- upper case to lower case letter conversion.
* [`ft_toupper`](libft/ft_toupper.c)			- lower case to upper case letter conversion.

### Funciones de la librería `<stdlib.h>`

* [`ft_atoi`](libft/ft_atoi.c)		      - convert ASCII string to integer.
* [`ft_calloc`](libft/ft_calloc.c)	      - memory allocation.

### Funciones de la librería `<strings.h>`

* [`ft_strlen`](42-libft/libft/ft_strlen.c)			  - find length of string.
* [`ft_strlcpy`](libft/ft_strlcpy.c)		  - size-bounded string copying.
* [`ft_strlcat`](libft/ft_strlcat.c)    	- size-bounded string concatenation.
* [`ft_strncmp`](libft/ft_strncmp.c)  		- compare strings (size-bounded).
* [`ft_strchr`](libft/ft_strchr.c)		  	- locate character in string (first occurrence).
* [`ft_strrchr`](libft/ft_strrchr.c)		  - locate character in string (last occurence).
* [`ft_strnstr`](libft/ft_strnstr.c)  		- locate a substring in a string (size-bounded).
* [`ft_strdup`](libft/ft_strdup.c)		  	- save a copy of a string (with malloc).

### Funciones de la librería `<string.h>`

* [`ft_bzero`](libft/ft_bzero.c)	  	  - write zeroes to a byte string.
* [`ft_memset`](libft/ft_memset.c)   	  - write a byte to a byte string.
* [`ft_memcpy`](libft/ft_memcpy.c)		    - copy memory area.
* [`ft_memmove`](libft/ft_memmove.c)	    - copy byte string.
* [`ft_memchr`](libft/ft_memchr.c)		    - locate byte in byte string.
* [`ft_memcmp`](libft/ft_memcmp.c)	      - compare byte string.

### Funciones no estándar

* [`ft_substr`](libft/ft_substr.c)				- extract substring from string.
* [`ft_strjoin`](libft/ft_strjoin.c)		  - concatenate two strings into a new string (with malloc).
* [`ft_strtrim`](libft/ft_strtrim.c)			- trim beginning and end of string with the specified characters.
* [`ft_split`](libft/ft_split.c)			  - split string, with specified character as delimiter, into an array of strings.
* [`ft_itoa`](libft/ft_itoa.c)					- convert integer to ASCII string.
* [`ft_strmapi`](libft/ft_strmapi.c)			- create new string from modifying string with specified function.
* [`ft_striteri`](libft/ft_striteri.c)			- applies a function to each character of the string passed as argument.
* [`ft_putchar_fd`](libft/ft_putchar_fd.c)		- output a character to given file.
* [`ft_putstr_fd`](libft/ft_putstr_fd.c)		- output string to given file.
* [`ft_putendl_fd`](libft/ft_putendl_fd.c)		- output string to given file with newline.
* [`ft_putnbr_fd`](libft/ft_putnbr_fd.c)		- output integer to given file.

### Funciones bonus

* [`ft_lstnew`](libft/ft_lstnew.c)				- create new list.
* [`ft_lstadd_front`](libft/ft_lstadd_front.c) - add new element at beginning of list.
* [`ft_lstsize`](libft/ft_lstsize.c)			- count elements of a list.
* [`ft_lstlast`](libft/ft_lstlast.c)			- find last element of list.
* [`ft_lstadd_back`](libft/ft_lstadd_back.c)	- add new element at end of list.
* [`ft_lstdelone`](libft/ft_lstdelone.c)		- delete element from list.
* [`ft_lstclear`](libft/ft_lstclear.c)			- delete sequence of elements of list from a starting point.
* [`ft_lstiter`](libft/ft_lstiter.c)		  - apply function to content of all list's elements.
* [`ft_lstmap`](libft/ft_lstmap.c)			  - apply function to content of all list's elements into new list.
