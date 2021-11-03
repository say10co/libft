/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:43:11 by adriouic          #+#    #+#             */
/*   Updated: 2021/11/03 19:52:03 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strnstr(const char *haysack, const char *needle, unsigned int n)
{
	int	i;
	int	j;
	int	t;

	if (needle[0] == '\0')
		return ((char *)haysack);
	j = 0;
	while (n--)
	{
		t = j;
		i = 0;
		while (haysack[t] == needle[i])
		{
			if (needle[i + 1] == '\0')
				return ((char *)(&haysack[j]));
			t++;
			i++;
		}
		j++;
	}
	return (0);
}
