/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:34:48 by adriouic          #+#    #+#             */
/*   Updated: 2021/11/07 21:46:21 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

static int	ft_skip(const char **str)
{
	int	sign;

	sign = 1;
	while (*str && ((**str >= 9 && **str <= 13) || **str == 32))
		*str = *str + 1;
	if (**str == '-')
	{
		*str = *str + 1;
		sign *= -1;
	}
	else if (**str == '+')
		*str = *str + 1;
	return (sign);
}

int	ft_atoi(const char *str)
{
	int					sign;
	unsigned long long	result;

	result = 0;
	sign = ft_skip(&str);
	while (*str)
	{
		if (*str >= 48 && *str <= 57)
		{	
			result = result * 10 + (*str - '0');
			if (result > 9223372036854775807)
			{
				if (sign == 1)
					return (-1);
				return (0);
			}
		}
		else
			break ;
		str++;
	}
	return (result * sign);
}

int	main(void)
{
	printf("%d\n", ft_atoi("  99999999999999999999999999"));
	printf("%d\n", atoi("  99999999999999999999999999"));
}
