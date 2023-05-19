/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarbero <sbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:46:32 by sbarbero          #+#    #+#             */
/*   Updated: 2023/05/10 18:25:24 by sbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destin;
	size_t	source;
	size_t	cont;

	destin = ft_strlen(dest);
	source = ft_strlen(src);
	if (size <= destin)
		return (source + size);
	cont = destin;
	while (*src != '\0' && cont < (size - 1))
		*(dest + cont++) = *src++;
	*(dest + cont) = '\0';
	return (destin + source);
}
