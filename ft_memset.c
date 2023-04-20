/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarbero <sbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:44:40 by sbarbero          #+#    #+#             */
/*   Updated: 2023/04/19 15:27:23 by sbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*k;
	size_t			i;

	i = 0;
	k = s;
	while (i < n)
	{
		k[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
