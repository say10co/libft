/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:04:29 by adriouic          #+#    #+#             */
/*   Updated: 2021/11/02 16:05:16 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(unsigned char c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
