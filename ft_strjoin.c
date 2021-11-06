/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:10:19 by adriouic          #+#    #+#             */
/*   Updated: 2021/11/04 11:16:35 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
static int	ft_strlen(const char *str)
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

	total_len = ft_strlen(s1) + ft_strlen(s2);
	index = 0;
	new_str = (char *)malloc(sizeof(char) * total_len);
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

int	main(void)
{
	char	*dest;

	dest = ft_strjoin("Hello ", "world");
	printf("%s\n", dest);
	return (0);
}
