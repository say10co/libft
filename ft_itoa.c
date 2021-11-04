/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:41:06 by adriouic          #+#    #+#             */
/*   Updated: 2021/11/04 21:07:05 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
static int	ft_size(int nbr)
{
	int	size;

	size = 1;
	if (nbr < 0)
	{
		size++;
		nbr *= -1;
	}
	while (nbr > 9)
	{
		nbr /= 10;
		size++;
	}
	return (size);
}

static int	ft_Q(unsigned int size)
{
	int	i;

	i = 1;
	if (size == 1)
		return (size);
	while (size > 1)
	{
		i *= 10;
		size--;
	}
	return (i);
}
static char	*edge_case(void)
{
	char *result;

	result = (char *)malloc(sizeof(char) * 12);
	return (result = "-2147483648");
}

char	*ft_itoa(int nbr)
{	
	int		size;
	int		index;
	char	*result;

	if (nbr == -2147483648)
		return (edge_case());
	size = ft_size(nbr);
	index = 0;
	result = (char *)malloc(sizeof(char) * (size + 1));
	if (!result)
		return (0);
	if (nbr < 0 && ++index)
	{	
		nbr *= -1;
		size--;
		result[0] = '-';
	}
	while (size)
	{
		result[index] = ((nbr / ft_Q(size) % 10) + '0');
		size--;
		index++;
	}
	result[index] = '\0';
	return (result);
}

int	main(void)
{
	printf("%s", ft_itoa(1231));
	return (0);
}
