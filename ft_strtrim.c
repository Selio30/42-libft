/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarbero <sbarbero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 21:54:35 by sbarbero          #+#    #+#             */
/*   Updated: 2023/05/10 22:01:53 by sbarbero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	count;
	size_t	len;

	count = 0;
	len = ft_strlen(s1);
	if (!s1 || !set)
		return (0);
	if (s1[count] == '\0' && len == 0)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[count]))
		count++;
	while (ft_strchr(set, s1[len - 1]))
		len--;
	return (ft_substr(s1, count, len - count));
}
