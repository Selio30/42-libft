/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarbero <sbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:54:25 by sbarbero          #+#    #+#             */
/*   Updated: 2023/05/11 18:59:53 by sbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	len;

	str = (char *) s;
	len = 0;
	if (!s || !f)
		return (NULL);
	str = (char *) malloc (sizeof(char) * ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (len < ft_strlen(s))
	{
		str[len] = f(len, s[len]);
		len++;
	}
	str[len] = '\0';
	return (str);
}
