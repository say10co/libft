/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:21:32 by adriouic          #+#    #+#             */
/*   Updated: 2021/11/06 18:04:14 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	index;

	d_len = len(dest);
	s_len = len(src);
	index = d_len;
	if (size == 0)
		return (s_len);
	while (index < size - 1 && src[index - d_len] != '\0')
	{
		dest[index] = src[index - d_len];
		index++;
	}
	if (size < index)
	{
		return (size + s_len);
	}
	dest[index] = '\0';
	return (d_len + s_len);
}
