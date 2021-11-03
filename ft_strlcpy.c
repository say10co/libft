/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:31:11 by adriouic          #+#    #+#             */
/*   Updated: 2021/11/03 13:39:21 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcpy(char *dst, char *src, unsigned int size)
{
	int	index;
	int	len;

	len = 0;
	while (src[size])
		len++;
	if (size == 0)
		return (len);
	index = 0;
	while (size - 1 && src[index] != '\0')
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (size);
}
