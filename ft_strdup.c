/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarbero <sbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:13:22 by sbarbero          #+#    #+#             */
/*   Updated: 2023/05/08 14:50:15 by sbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	void	*i;

	len = ft_strlen(str) + 1;
	i = malloc(len);
	if (!i)
		return (0);
	ft_memcpy(i, str, len);
	return ((char *)i);
}
