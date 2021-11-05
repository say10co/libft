/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:09:49 by adriouic          #+#    #+#             */
/*   Updated: 2021/11/05 19:30:41 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int	c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}	
