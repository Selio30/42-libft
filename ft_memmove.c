/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarbero <sbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:04:00 by sbarbero          #+#    #+#             */
/*   Updated: 2023/04/19 16:21:18 by sbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*str1;
	unsigned const char	*str2;

	if (dest < src)
		return (ft_memcpy(dest, src, n));
	str1 = (unsigned char *)dest;
	str2 = (unsigned const char *)src;
	if (!n || str1 == str2)
		return (str1);
	while (n--)
		str1[n] = str2[n];
	return (dest);
}
