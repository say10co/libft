/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:34:48 by adriouic          #+#    #+#             */
/*   Updated: 2021/11/06 20:36:07 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(const char *str)
{
	int	sign;
	int	index;
	int	result;

	sign = 1;
	result = 0;
	index = 0;
	while (str[index] == '\n' || str[index] == '\t' || str[index] == '\f'
		|| str[index] == '\r' || str[index] == '\v' || str[index] == ' ')
		index++;
	if (str[index] == '-')
	{
		index++;
		sign *= -1;
	}
	else if (str[index] == '+')
		index++;
	while (str[index] && ++index)
	{
		if (str[index - 1] >= 48 && str[index - 1] <= 57)
			result = result * 10 + (str[index - 1] - '0');
		else
			break ;
	}
	return (result * sign);
}
/*
#include <stdlib.h>
int main()
{
	printf("%d\n", ft_atoi("546:5"));

}
*/
