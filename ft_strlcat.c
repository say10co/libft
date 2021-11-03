/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:21:32 by adriouic          #+#    #+#             */
/*   Updated: 2021/11/03 13:27:09 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	index;

	d_len = len(dest);
	s_len = len(src);
	index = d_len;
	if (size == 0)
		return (s_len);
	while (index < size - 1 && src[index - d_len] != '\0')
	{
		dest[index] = src[index - d_len];
		index++;
	}
	if (size < index)
	{
		return (size + s_len);
	}
	dest[index] = '\0';
	return (d_len + s_len);
}
