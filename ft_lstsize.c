/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:38:09 by adriouic          #+#    #+#             */
/*   Updated: 2021/11/05 12:43:05 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
int ft_lstsize(t_list *lst)
{
	int		len;
	t_list	*curr;
	
	len = 0;
	curr = lst;
	while(curr)
	{
		len++;
		curr = curr->next;
	}
	return (len);
}

/*
int main()
{
	t_list *root;
	root = ft_lstnew("b");
	root->next = ft_lstnew("c");
	root->next->next = ft_lstnew("d");
	printf("%d\n", ft_lstsize(root));
}
*/
