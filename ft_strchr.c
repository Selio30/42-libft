/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarbero <sbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 20:53:48 by sbarbero          #+#    #+#             */
/*   Updated: 2023/05/04 20:30:44 by sbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int i)
{
	if ((!*str && (char)i == '\0'))
		return ((char *)str);
	while (*str != '\0')
	{
		if (*str == (char)i)
			return ((char *)str);
		str++;
		if (*str == (char)i)
			return ((char *)str);
	}
	return (0);
}
