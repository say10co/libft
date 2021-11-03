/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:04:55 by adriouic          #+#    #+#             */
/*   Updated: 2021/11/01 17:07:11 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isalnum(unsigned char c)
{
	char	*digits;
	int		i;

	if ((c >= 65 && c <= 90 ) || (c >= 97 && c <= 122))
		return (1);
	digits = "0123456789";
	i = 0;
	while (digits[i])
	{
		if (c == digits[i])
			return (1);
		i++;
	}
	return (0);
}
