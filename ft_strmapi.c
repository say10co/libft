/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:31:47 by adriouic          #+#    #+#             */
/*   Updated: 2021/11/04 21:53:42 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
static int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		s_length;
	int		i;
	char	*result;

	s_length = ft_strlen(s);
	result = (char *)malloc(1 + s_length * sizeof(char));
	i = 0;
	while (i < s_length)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
char f(unsigned int	s, char c)
{
	(void)(s);
	return (c);
}

int	main(void)
{
	printf("%s\n", ft_strmapi("123456789", &f));	
	return (0);
}
*/
