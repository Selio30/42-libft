/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usu <usu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:29:46 by sbarbero          #+#    #+#             */
/*   Updated: 2023/05/12 06:58:27 by usu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_count(long i)
{
	size_t	count;

	count = 0;
	if (i <= 0)
		count++;
	while (i != 0)
	{
		i /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	i;

	i = n;
	len = num_count(i);
	str = (char *) malloc (sizeof (char) * (len + 1));
	if (!str)
		return (0);
	str[len--] = '\0';
	if (i == 0)
		str[0] = '0';
	if (i < 0)
	{
		str[0] = '-';
		i *= -1;
	}
	while (i > 0)
	{
		str[len] = (i % 10) + '0';
		i /= 10;
		len--;
	}
	return (str);
}
