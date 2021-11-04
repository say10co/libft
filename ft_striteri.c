/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stiteri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:42:21 by adriouic          #+#    #+#             */
/*   Updated: 2021/11/04 18:50:10 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void ft_striteri(char *s, void (*f)(unsigned int,  char*))
{
	int	index;

	index = 0;
	while (s[index])
	{
		f(index, &s[index]);
		index++;
	}
}
/*
void f(unsigned int w, char *j)
{
	(void)(w);
	*j = 'a';
}
int main(void)
{
	char test[] = "bbb";
	ft_striteri(test, &f);	
	printf("%s", test);
	return (0);
	


}
*/
