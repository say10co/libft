/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:55:18 by adriouic          #+#    #+#             */
/*   Updated: 2021/11/06 18:03:47 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

static int	ft_strlen(const char *str)
{	
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	int		s1len;
	int		index;
	char	*cpy;

	index = 0;
	s1len = ft_strlen(s1);
	cpy = (char *)malloc(s1len * sizeof(char) + 1);
	if (!cpy)
		return (0);
	while (s1[index])
	{
		cpy[index] = s1[index];
		index++;
	}
	cpy[index] = '\0';
	return (cpy);
}
