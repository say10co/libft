/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:10:19 by adriouic          #+#    #+#             */
/*   Updated: 2021/11/07 19:04:05 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	sft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		index;
	int		total_len;
	char	*new_str;
	
	if (!s1 || !s2)
		return (0);
	total_len = sft_strlen(s1) + sft_strlen(s2);
	index = 0;
	new_str = (char *)malloc(sizeof(char) * total_len + 1);
	if (!new_str)
		return (0);
	while (total_len--)
	{
		if (*s1 != '\0')
			new_str[index] = *s1;
		else
		{
			s1 = s2;
			new_str[index] = *s1;
		}
		s1++;
		index++;
	}
	new_str[index] = '\0';
	return (new_str);
}
