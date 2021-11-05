/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:45:25 by adriouic          #+#    #+#             */
/*   Updated: 2021/11/05 12:47:46 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
t_list *ft_lstlast(t_list *lst)
{
	t_list	*curr;

	curr = lst;
	while (curr->next)
		curr = curr->next;
	return (curr);

}
/*
int main()
{
	t_list *root;
	root = ft_lstnew("b");
	root->next = ft_lstnew("c");
	root->next->next = ft_lstnew("d");
	printf("%s\n", (ft_lstlast(root))->content);
}
*/
