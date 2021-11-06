/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:04:29 by adriouic          #+#    #+#             */
/*   Updated: 2021/11/06 15:03:52 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int	c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
