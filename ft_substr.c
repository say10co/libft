/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:57:21 by adriouic          #+#    #+#             */
/*   Updated: 2021/11/06 18:26:24 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	index;

	index = 0;
	substr = (char *)malloc(len * sizeof(char));
	if (!substr)
		return (0);
	while (index < len)
	{
		substr[index] = s[start];
		start++;
		index++;
	}
	return (substr);
}
